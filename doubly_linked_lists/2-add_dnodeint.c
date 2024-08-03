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
temp = malloc(sizeof(dlistint_t));
temp->n= n;
temp->next = *head;
temp->prev = NULL;
if (*head !=  NULL)
*head->prev = temp;
*head = temp;
return (temp);
}
