#include "lists.h"

/**
 * print_listint_safe - print all the nodes in a list
 * @head: pointer to the first item of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head, *next = NULL, *check = NULL;
	int checked = 0;

	if (head == NULL)
	{
		exit(98);
	}

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		next = current->next;
		check = head;

		while (check != current)
		{
			if (check == next)
			{
				checked = 1;
				break;
			}
			check = check->next;
		}

		if (checked)
			break;

		current = next;
		node_count++;
	}

	if (node_count == 0)
		exit(98);

	return (node_count);
}
