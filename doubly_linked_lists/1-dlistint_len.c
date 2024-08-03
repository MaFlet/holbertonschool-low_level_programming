#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
*dlistint_len - returns the number of elements in
*dlistint_t list
*@h: header pointer to the first node
*Return: 0 (Success)
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
nodes++;
h = h->next;
}
return (nodes);
}
