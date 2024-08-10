#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*error_file - check for opening the file and hanle errors
*@file_from: intial file to copy and check
*@file_to: destination file to copy to
*@argv: array of arguments
*Return: void
*/
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
}
}
/**
*main - copy content of a file from one to another
*@argc: argument parameter to count
*@argv: array of arguments
*Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
ssize_t negative_chars, nwr;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);
negative_chars = 1024;
while (negative_chars == 1024)
{
negative_chars = read(file_from, buf, 1024);
if (negative_chars == -1)
error_file(-1, 0, argv);
nwr = write(file_to, buf, 1024);
if (nwr == -1)
error_file(0, -1, argv);
}
err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
err_close = close(file_to);
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}
