#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*init_dog - initialize variable type struct dog
*@d: type struct dog to initialize
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
