#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type struct dog
 *@name:input
 *@age: input
 *@owner:input
 * Return: Always 0.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
