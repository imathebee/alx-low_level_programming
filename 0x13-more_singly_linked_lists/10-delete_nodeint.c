#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to a pointer to the first element of a listint_t list.
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp, *current;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
current = *head;
while (i < index - 1)
{
if (current->next == NULL)
return (-1);
current = current->next;
i++;
}
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}

