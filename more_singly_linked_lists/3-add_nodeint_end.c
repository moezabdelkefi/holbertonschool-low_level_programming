#include "lists.h"
/**
 *add_nodeint_end - add a new node at the end of the liste
 *@head: argument
 *@n:argument
 *Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = newNode;
		free(newNode);
	}
	return (newNode);
}
