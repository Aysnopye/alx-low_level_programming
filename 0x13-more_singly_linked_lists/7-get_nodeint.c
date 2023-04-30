#include "lists.h"

/**
 * get_nodeint_at_index - Node to return at a particular index in a linked list
 * @head: The linked list contain the first node
 * @index: index of the node to be returned
 * Return: let pointer points to the node we are looking for, or NULL if fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && i < index)
	{
	temp = temp->next;
	i++;
	}
	return (temp ? temp : NULL);
}
