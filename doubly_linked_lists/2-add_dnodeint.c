#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*add_dnodeint - adds a new node at the beginning of
*dlistint_t list
*@n: data stored in node
*@head: header pointer to first node
*Return: NULL if failed otherwise return to new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *h;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->prev = NULL;
h = *head;
if (h != NULL)
{
while (h->prev != NULL)
h = h->prev;
}
temp->next = h;
if (h != NULL)
h->prev = temp;
*head = temp;
return (temp);
}
