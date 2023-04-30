#include "lists.h"

/**
 * sum_listint - calc the sum of all total  data in the listint_t list
 * @head:The first node in the linked list
 * Return: result to sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
