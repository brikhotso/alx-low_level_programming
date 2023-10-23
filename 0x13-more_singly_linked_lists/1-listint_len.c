#include "lists.h"

/**
 * listint_len - count all elements of a list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	for (count = 0; current; count++)
	{
		current = current->next;
	}
	return (count);
}
