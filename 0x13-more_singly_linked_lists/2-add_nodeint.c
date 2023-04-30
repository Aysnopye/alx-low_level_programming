#include "lists.h"

/**
 * add_nodeint - At the beginning of a linked list add a new node to it
 * @head: At the first node in the list place a pointer that points to it
 * @n: Insert data in that new node
 * Return: Place pointer to the new node, provide NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
