#include "hash_tables.h"
/**
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	table->size = size;
	table->size = 0;
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return table;
}