#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: input
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (node);
}
