#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a brand new node into a linked list,
 * with a stated position given
 * @head: Place a pointer to the first node inside the list
 * @idx: Place your index at where the new node is added
 * @n: Insert data into the new node
 * Return: the pointer to the new node, or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i;

	listint_t *new;

	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)

	return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	for (i = 0; temp && i < idx; i++)
	{
	if (i == idx - 1)
	{
	new->next = temp->next;

	temp->next = new;
	return (new);
	}
	else
	temp = temp->next;
	}
	return (NULL);
}
