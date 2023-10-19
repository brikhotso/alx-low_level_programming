#include "lists.h"

/**
 * list_len - return number of elements in a linked list_t list
 * @h: node to be counted
 *
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	for (count = 0; current; count++)
	{
		current = current->next;
	}

	return (count);
}
