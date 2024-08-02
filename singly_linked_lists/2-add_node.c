#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
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
int s;
for (s = 0; duplicate_str[s] != '\0'; s++)
	;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = s;
new_node->next = *head;
*head = new_node;
return (*head);
}
