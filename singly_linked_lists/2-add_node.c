#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*strdup - duplicate a string
*@s: string to be duplicated
*Return: duplicated string
*/
char *strdup(const char *s)
{
char *str = strdup(s);
printf("%s", str);
return (0);
}
/**
*add_node - adds a new node at the beginning of
*list_t list
*@str: string to be duplicated
*@head: header pointer to first node
*Return: NULL if failed otherwise return to new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;
while (str[len])
len++;
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
new_node->len = len;
new_node->next = (*head);
(*head) = new_node;
return (*head);
}
