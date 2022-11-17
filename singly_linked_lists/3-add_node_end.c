#include "lists.h"
/**
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *p;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	p = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		new->str = p;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
	}
	return (*head);
}