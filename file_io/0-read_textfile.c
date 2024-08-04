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
int file_descriptor, err, rd;
char *buffer;
file_descriptor = err = rd = 0;
if (!filename || !letters)
return (0);
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor < 0)
return (0);
buffer = malloc(sizeof(char) * letters + 1);
if (!buffer)
return (0);
rd = read(file_descriptor, buffer, letters);
if (rd < 0)
{
free(buffer);
return (0);
}
buffer[letters] = '\0';
err = write(STDOUT_FILENO, buffer, rd);
if (err <= 0)
{
free(buffer);
return (0);
}
free(buffer);
close(file_descriptor);
return (rd);
}
