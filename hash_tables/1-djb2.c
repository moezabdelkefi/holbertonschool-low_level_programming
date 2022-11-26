#include "hash_tables.h"
/**
 *
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int i = 0, j;

	for (j = 0; str[j]; j++)
		i += str[j];
	return i % CAPACITY;
}