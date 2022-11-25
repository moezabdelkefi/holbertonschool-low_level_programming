#include "lists.h"
/**
 *sum_dlistint- sum of nodes
 *@head: argument
 *Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
