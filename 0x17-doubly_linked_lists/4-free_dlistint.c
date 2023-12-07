#include "list.h"

/**
 * free_dlistint - free doubly linked list
 * @head: head of dlistint
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
