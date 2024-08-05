#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#define BUFSIZE 1024
static ssize_t read_file(char *file, char **buf, int fd);
static void write_copy(char *file, int fd, char *buf, int len);
/**
*main - creating a function that copies the content of a
*file to another file
*@ac: number of parameters passed to the program
*@av: is an array of string arguments
*Return: 0 (Success)
*/
int main(int ac, char *av[])
{
int fd_0, fd_1, rd_length, error;
char *buf, *file_from, *file_to;
buf = NULL;
rd_length = 1;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = av[1];
file_to = av[2];
fd_0 = open(file_from, O_RDONLY);
fd_1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
while (rd_length > 0)
{
rd_length = read_file(file_from, &buf, fd_0);
if (!rd_length)
break;
write_copy(file_to, fd_1, buf, rd_length);
}
free(buf);
error = close(fd_0);
if (error < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd_0);
exit(100);
}
error = close(fd_1);
if (error < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd_1);
exit(100);
}
return (0);
}
/**
*read_file - read file into buffer
*@file: file to read
*@buf: pointer to pointer of buffer
*@fd: file descriptor
*Return: current size of buffer
*/
static ssize_t read_file(char *file, char **buf, int fd)
{
int rd_length;
if (fd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %s\n", file);
exit(98);
}
if (!(*buf))
*buf = malloc(sizeof(char) * BUFSIZE);
if (!(*buf))
{
dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %s\n", file);
exit(98);
}
rd_length = read(fd, *buf, BUFSIZE);
if (rd_length < 0)
{
free(*buf);
dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %s\n", file);
exit(98);
}
return (rd_length);
}
/**
*write_copy - write buffer into file
*@file: destination for contents in buffer
*@fd: file descriptor for @file
*@buf: pointer to buffer
*@length: current size of buffer
*/
static void write_copy(char *file, int fd, char *buf, int length)
{
if (fd < 0 || !buf)
{
free(buf);
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
if (write(fd, buf, length) < 0)
{
free(buf);
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
}
