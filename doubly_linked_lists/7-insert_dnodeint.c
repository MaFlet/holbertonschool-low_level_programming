#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*insert_dnodeint_at_index - inserts a new node at a
*given position
*@h: pointer to the first node
*@idx: index of list where new node should be added
*@n: data included in nodes
*Return: NULL if its not possible to add new node and pointer if otherwise
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 0;
dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp = *h;
if (new_node)
{
new_node->n = n;
if (idx == 0)
{
if (*h)
{
new_node->next = *h;
*h->prev = new_node;
}
*h = new_node;
return (new_node);
}
while (count < idx - 1 && temp)
{
temp = temp->next;
count++;
}
if (temp)
{
if (temp->next)
temp->next->prev = new_node;
new_node->next = temp->next;
new_node->prev = temp;
temp->next = new_node;
return (new_node);
}
}
return (NULL);
}
