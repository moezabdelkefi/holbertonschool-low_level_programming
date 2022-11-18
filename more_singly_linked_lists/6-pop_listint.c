#include "lists.h"
/**
 *pop_listint - delete the node head
 *@head: argument
 *Return: the empty node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if ((*head) || head != NULL)
		return (0);
	temp = (*head)->next;
	val = (*head)->n;
	free(*head);
	*head = temp;
	return (val);
}
