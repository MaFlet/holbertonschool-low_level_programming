#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
*list_len - returns the number of elements in a 
*linked list_t list
*@h: header pointer to the first node
*Return: 0 (Success)
*/
size_t list_len(const list_t *h)
{
size_t s = 0;
while (h)
{
h = h->next;
s++;
}
return (s);
}
