#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node of the list, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k;
listint_t *current;
current = head;
for (k = 0; k < index && current != NULL; k++)
current = current->next;
return (current);
}

