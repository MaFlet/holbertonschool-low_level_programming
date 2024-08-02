#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
*add_node - adds a new node at the beginning of
*list_t list
*@str: string to be duplicated
*@head: header pointer to first node
*Return: NULL if failed otherwise return to new element
*/
list_t *add_node(list_t **head, const char *str)
{
struct node *head = NULL;
struct node *newNode = malloc(sizeof(struct node));
newNode->data = str;
newNode->next = **head;
**head = newNode;
return (str);
}
