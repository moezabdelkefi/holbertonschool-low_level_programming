#include <stdlib.h>
#include "dog.h"
/**
 * new_dog -  a function that creates a new dog
 *@name:input
 *@age:input
 *@owner:input
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int j, s, i;
	dog_t *doggy;

	j = s = 0;
	while (name[j++])
		;
	while (owner[s++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(j * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(s * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
