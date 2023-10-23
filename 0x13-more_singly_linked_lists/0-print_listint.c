#include "lists.h"

/**
 * print_listint - print all elements of a list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		node++;
		current = current->next;
	}
	return (node);
}
