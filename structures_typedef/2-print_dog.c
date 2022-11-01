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
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age:%f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
