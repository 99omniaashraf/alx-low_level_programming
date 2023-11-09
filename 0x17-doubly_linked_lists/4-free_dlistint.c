#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: input
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
