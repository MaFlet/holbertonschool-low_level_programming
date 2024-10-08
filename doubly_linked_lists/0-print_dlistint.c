#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
*print_dlistint - prints all the elements of dlistint_t
*@h: header pointer to the first node
*Return: 0 (Success)
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
