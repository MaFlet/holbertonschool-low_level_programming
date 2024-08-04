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
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
new_node->prev = NULL;
return (NULL);
}
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
new_node->prev = temp;
return (temp);
{
new_node = malloc(sizeof(dlistint_t));
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
if (*head != NULL)
(*head)->prev = new_node;
*head = new_node;
return (new_node);
}
}
