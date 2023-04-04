#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: A pointer to the pointer to the first node of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The value to be stored in the new node.
 *
 * Return: If the function fails or if it is not possible to add the new
 *         node at index idx, return NULL. Otherwise, return the address
 *         of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current = *head, *new_node;
unsigned int i;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = current;
*head = new_node;
return (new_node);
}
for (i = 0; current && i < idx - 1; i++)
current = current->next;
if (!current)
{
free(new_node);
return (NULL);
}
new_node->next = current->next;
current->next = new_node;
return (new_node);
}

