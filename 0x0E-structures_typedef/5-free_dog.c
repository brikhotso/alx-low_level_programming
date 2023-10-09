#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees the dogs
 * @d: type struct dog
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
