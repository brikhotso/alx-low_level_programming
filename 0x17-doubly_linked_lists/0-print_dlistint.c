#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint
 * @h: pointer to first item of a dlistint
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
