#include "lists.h"
/**
 *free_list - frees a liste
 *@head: argument
 *Return: none
 */
void free_list(list_t *head)
{
	void *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
