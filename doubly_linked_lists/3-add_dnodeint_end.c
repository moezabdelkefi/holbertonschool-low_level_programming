#include "lists.h"
/**
 *add_dnodeint_end - a function that adds a new node at the end
 *@head: argument
 *@n: argument
 *Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{

		ptr->n = n;
		if (*head == NULL)
		{
			ptr->next = NULL;
			ptr->prev = NULL;
			*head = ptr;
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->prev = temp;
			ptr->next = NULL;
		}
	}
	return (ptr);
}
