#include "lists.h"
#include <stdlib.h>
/**
 *delete_dnodeint_at_index - Deletes the node
 *at a given position in a doubly linked list.
 *@head: Double pointer to the head of the list.
 *@index: Index of the node to be deleted. Index starts at 0.
 *
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}

	temp = current->next;
	current->prev->next = temp;
	temp->prev = current->prev;
	free(current);
	return (1);
}
