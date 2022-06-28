#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - creates new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: a dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer;
	char *a, *b;
	int x, len1, len2;

	len1 = 0;
	for (x = 0; name[x] != '\0'; x++)
		len1++;
	len2 = 0;
	for (x = 0; owner[x] != '\0'; x++)
		len2++;

	pointer = malloc(sizeof(dog_t));
	if (pointer == NULL)
		return (NULL);
	a = malloc((len1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (x = 0; x < len1; x++)
		a[x] = name[x];
	a[x] = '\0';
	pointer->name = a;
	pointer->age = age;

	b = malloc((len2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free (pointer);
		return (NULL);
	}
	for (x = 0; x < len2; x++)
		b[x] = owner[x];
	b[x] = '\0';
	pointer->owner = b;
	return (pointer);
}
