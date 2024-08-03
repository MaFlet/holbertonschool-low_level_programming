#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*free_list - frees a list_t list
*@head: pointer to free list_t list
*Return: void
*/
void free_list(list_t *head)
{
list_t *current;
list_t *next;
while (current != NULL)
{
next = current->next;
current = next;
free(current);
}
}
