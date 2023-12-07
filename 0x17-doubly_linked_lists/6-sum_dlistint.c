#include "lists.h"

/**
 * sum_dlistint - sum all data of a dlistint
 * @head: first item of dlistint
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
