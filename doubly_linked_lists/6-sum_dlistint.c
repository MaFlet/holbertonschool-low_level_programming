#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*sum_dlistint - returns the sum of all the data(n) of
*a dlistint_t linked list
*@head: pointer to the first node
*Return: 0 if list is empty and pointer if otherwise
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
}
return (sum);
}
