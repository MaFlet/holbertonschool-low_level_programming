#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*add_node_end - adds a new node at the end of
*list_t list
*@str: string to be duplicated
*@head: header pointer to first node
*Return: NULL if failed otherwise return to new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *current_node;
int s;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
for (s = 0; str[s]; s++)
;
new_node->len = s;
new_node->next = NULL;
current_node = *head;
if (current_node == NULL)
{
*head = new_node;
}
else
{
while (current_node->next != NULL)
current_node = current_node->next;
current_node->next = new_node;
}
return (*head);
}
