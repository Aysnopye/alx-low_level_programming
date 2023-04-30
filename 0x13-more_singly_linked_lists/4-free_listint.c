#include "lists.h"

/**
 * free_listint - Make linked listto be free
 * @head: Allow listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
