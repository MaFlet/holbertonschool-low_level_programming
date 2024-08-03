#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*add_node - adds a new node at the beginning of
*list_t list
*@str: string to be duplicated
*@head: header pointer to first node
*Return: NULL if failed otherwise return to new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
int len = 0;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
while (str[len])
len++;
temp->str = strdup(str);
temp->len = len;
temp->next = *head;
*head = temp;
return (temp);
}
