#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_strlen - returns length of string
*@s: string length
*Return: void
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
**_strcpy - copy string
*@dest: buffer pointer to
*@src: string to copy to
*Return: *dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
**new_dog - creates new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of the dog
*Return: NULL if failure if (Success) new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int i, c;
i = _strlen(name);
c = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (i + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (c + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
