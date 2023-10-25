#include "lists.h"

/**
 * print_listint_safe - print all the nodes in a list
 * @head: pointer to the first item of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0, node_check;
	const listint_t *slow = NULL, *fast = NULL;

	slow = head;
	while (slow != NULL)
	{
		if (head == NULL)
			exit(98);

		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;
		slow = slow->next;
		fast = head;

		node_check = 0;
		while (node_check < node_count)
		{
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				return (node_count);
			}
			fast = fast->next;
			node_check++;
		}
	}

	return (node_count);
}
