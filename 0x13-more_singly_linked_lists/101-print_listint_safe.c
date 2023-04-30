#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);

size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - To Count the number of available unique nodes
 * in the looped listint_t linked lists.
 * @head: Place a pointer to points to the head of the listint_t to check
 * Return: -0 If the list is not looped.
 * Otherwise - the numbers of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{

	const listint_t *tortoise, *hare;

	size_t nodes = 1;

	if (head == NULL || head->next == NULL)

	return (0);
	tortoise = head->next;

	hare = (head->next)->next;
	while (hare)
	{
	if (tortoise == hare)
	{
	tortoise = head;
	while (tortoise != hare)
	{
	nodes++;

	tortoise = tortoise->next;
	hare = hare->next;
	}
	tortoise = tortoise->next;
	while (tortoise != hare)
	{
	nodes++;
	tortoise = tortoise->next;
	}
	return (nodes);
	}

	tortoise = tortoise->next;
	hare = (hare->next)->next;
	}
	return (0);

}

/**
 * print_listint_safe - Print a listint_t list safely.
 * @head: Place a pointer to points to the head of the listint_t list.
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
