#include "lists.h"
/**
 *add_node - create a new node
 *@head:a pointer to the head of the list_t
 *@str: a sttring to be added
 *Return: a new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *p;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	p = strdup(str);
	if (p == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		new->str = p;
	new->len = len;
	new->next = *head;
	*head = (new);
	return (new);
}
