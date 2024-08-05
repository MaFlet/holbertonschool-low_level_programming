#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
/**
*main - creating a function that copies the content of a
*file to another file
*@argc: number of parameters passed to the program
*@argv: is an array of string arguments
*Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
int num1 = 1024, num2 = 0;
char buffer[1024];
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from), exit(99);
}
while (num1 == 1024)
{
num1 = read(file_from, buffer, 1024);
if (num1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
num2 = write(file_to, buffer, num1);
if (num2 < num1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (close(file_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_from);
exit(100);
if (close(file_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_to);
exit(100);
return (0);
}
