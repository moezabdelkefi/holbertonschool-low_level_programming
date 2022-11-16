#include "lists.h"
/**
 *
 */
size_t print_list(const list_t *h)
{
	int node = 0;

	for (node = 0; h != NULL; node++)
	{
		if (h->str == NULL)
		{
			printf("[0] nil\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (node);
}
