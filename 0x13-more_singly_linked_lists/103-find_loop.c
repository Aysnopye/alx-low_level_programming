#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: The linked list to be searched for
 * Return: the address of the available node where the loop starts,
 * or leave NULL if fails
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;

	listint_t *fast = head;

	if (!head)
	return (NULL);
	while (slow && fast && fast->next)
	{
	fast = fast->next->next;
	slow = slow->next;
	if (fast == slow)
	{
	slow = head;
	while (slow != fast)
	{
	slow = slow->next;
	fast = fast->next;
	}
	return (fast);
	}
	}
	return (NULL);
}
