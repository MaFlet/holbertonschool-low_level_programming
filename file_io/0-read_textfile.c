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
int file_descriptor, length, writechars;
char *buffer;
if (filename == NULL || letters == 0)
buffer = malloc(sizeof(char) * (letters));
if (buffer == NULL)
return (0);
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
free(buffer);
return (0);
}
length = read(file_descriptor, buffer, letters);
if (length == -1)
{
free(buffer);
close(file_descriptor);
return (0);
}
writechars = write(STDOUT_FILENO, buffer, length);
free(buffer);
close(file_descriptor);
if (writechars != length)
return (0);
return (length);
}
