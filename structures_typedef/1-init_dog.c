#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  a function that initialize a variable of type struct dog
 *@name:input
 *@age: input
 *@owner:input
 *@d:input
 * Return: Always 0.typedef struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
