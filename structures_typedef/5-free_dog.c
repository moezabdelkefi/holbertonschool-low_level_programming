#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees dogs
 *@d: input
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
