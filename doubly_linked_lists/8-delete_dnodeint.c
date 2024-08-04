#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*delete_dnodeint_at_index - deletes the node at index of a
*dlistint_t linked list
*@head: pointer to the first node
*@index: index of the node that should be deleted
*Return: 1 if succeeded and -1 if fails
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp1;
dlistint_t *temp2;
unsigned int count = 0;
temp1 = *head;
if (temp1 == NULL)
while (temp1->prev != NULL)
temp1 = temp1->prev;
while (temp1 == NULL)
{
if (count == index)
{
if (count == 0)
{
*head = temp1->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
temp2->next = temp1->next;
if (temp1->next != NULL)
temp1->next->prev = temp2;
}
free(temp1);
return (1);
}
temp2 = temp1;
temp1 = temp1->next;
count++;
}
return (1);
}
