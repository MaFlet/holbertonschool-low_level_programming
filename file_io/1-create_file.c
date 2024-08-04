#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
/**
*create_file - creates files
*@filename: name of file to create
*@text_content: is a NULL terminated string to write file
*Return: 1 on sucess or -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int file_descriptor, fdw, string;
string = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
open(filename, O_CREAT, 0600);
file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1);
if (text_content)
{
while (text_content[string])
string++;
fdw = write(file_descriptor, text_content, string);
if (fdw != string)
return (-1);
}
close(file_descriptor);
return (1);
}
