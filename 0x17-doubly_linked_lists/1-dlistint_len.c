#include "lists.h"

/**
 * dlistint_len - number of elements in a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
