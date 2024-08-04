#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*add_dnodeint_end - adds a new node at the end of
*dlistint_t list
*@n: data to be added
*@head: header pointer to first node
*Return: NULL if failed otherwise return to new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
temp = *head;
if (temp != NULL)
{
while (temp->next != NULL)
temp = temp->next;
}
else
{
*head = new_node;
}
new_node->prev = temp;
return (new_node);
}
