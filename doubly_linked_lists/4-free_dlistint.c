#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*free_dlistint - frees a dlistint_t list
*@head: pointer to free list_t list
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
if (head != NULL)
while (head->prev != NULL)
head = head->prev;
while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}
