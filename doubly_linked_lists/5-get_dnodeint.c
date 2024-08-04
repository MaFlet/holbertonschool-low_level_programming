#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*get_dnodeint_at_index - returns the nth node of dlistint_t
*@head: pointer to the first node
*@index: index of node, starting from 0
*Return: NULL if node does not exist and pointer if otherwise
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int n = 0;
if (!head)
return (NULL);
while (head && n < index)
{
head = head->next;
n++;
}
return (head ? head : NULL);
}
