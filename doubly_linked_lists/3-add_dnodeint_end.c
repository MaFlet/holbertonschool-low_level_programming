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
dlistint_t *temp = NULL, *new_node = malloc(sizeof(dlistint_t));
if (new_node)
{
new_node->n = n;
if (*head)
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
new_node->prev = temp;
}
else
*head = new_node;
}
return (new_node);
}
