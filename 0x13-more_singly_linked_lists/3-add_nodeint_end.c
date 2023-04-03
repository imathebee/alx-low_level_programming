#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the list
 * @n: integer value to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *last_node;
new_node = malloc(sizeof(listint_t));  /* create a new node */
if (new_node == NULL)  /* check if new node was created */
return (NULL);
new_node->n = n;  /* set the value of new node */
new_node->next = NULL;  /* make new node point to NULL */
if (*head == NULL)  /* check if the head of the list is NULL */
{
*head = new_node;  /* make new node the head */
return (new_node);
}
last_node = *head;  /* start traversing the list from the head */
while (last_node->next != NULL)  /* traverse till the last node */
last_node = last_node->next;
last_node->next = new_node;  /* make the last node point to the new node */
return (new_node);
}
