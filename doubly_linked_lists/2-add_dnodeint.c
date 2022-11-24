#include "lists.h"
/**
 *add_dnodeint - adding a new node at the negining
 *@head: argument
 *@n: argument
 *Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
