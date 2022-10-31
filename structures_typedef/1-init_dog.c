#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.typedef struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}