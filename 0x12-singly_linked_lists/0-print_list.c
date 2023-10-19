#include "lists.h"

/**
 * print_list - print all elements of a t_list
 * @h: node to be printed
 *
 * Return: value of the node
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		node++;
		current = current->next;
	}

	return (node);
}
