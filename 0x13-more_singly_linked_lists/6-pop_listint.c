#include "lists.h"

/**
 * pop_listint - The head node of a linked list to be deleted
 * @head: Place your pointer to face the first element in the linked list
 * Return: the data placed inside the elements that was deleted,
 * or return 0 if the list is empty
 */

int pop_listint(listint_t **head)
{

	listint_t *temp;

	int num;

	if (!head || !*head)
	return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
