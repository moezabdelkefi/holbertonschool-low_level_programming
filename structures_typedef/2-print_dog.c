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
	d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
	printf("Age: %f\n", d->age);
	d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
}