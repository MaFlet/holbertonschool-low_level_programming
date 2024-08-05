#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
/**
*append_text_to_file - appends text at the end of file
*@filename: name of file
*@text_content: is a NULL terminated string to add at the end
*of file
*Return: 1 on sucess or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, string;
string = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
while (text_content[string] != '\0')
{
string++;
}
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);
write(file_descriptor, text_content, string);
return (1);
}
