#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
/**
*read_textfile - reads text file and prints it to the
*POSIX standard output
*@filename: text file needs to be printed
*@letters: number of letters it should read and print
*Return: 0 if filename if NULL or write fails or file cannot
*be opened
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
t = read(fd, buffer, letters);
w = write(STDOUT_FILENO, buffer, t);
free(buffer);
close(fd);
return (w);
}
