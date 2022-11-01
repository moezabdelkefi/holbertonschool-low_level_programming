#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog -  a function that prints a struct dog
 *@d:input
 * Return: Always 0.typedef struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else if (d->name == NULL)
	{
		printf("name: (nil)\n");
		printf("age: % f\n", d->age);
		printf("owner: (nil)\n");
	}
	else
	{
		printf("name: %s\n", d->name);
		printf("age:%f\n", d->age);
		printf("owner: %s\n", d->owner);
	}
}

