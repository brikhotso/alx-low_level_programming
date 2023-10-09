#include "dog.h"
#include <stdio.h>

/**
 * init_dog - ititialialize a variable of type struct dog
 * @d: struct type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: return pointer to initialized type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
