#include "lists.h"

/**
 * reverse_listint - To reverse a linked list
 * @head: Place the pointer to points to the first node inside the list
 * Return: pointer to the first node inside the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next;
	}
	*head = prev;
	return (*head);
}
