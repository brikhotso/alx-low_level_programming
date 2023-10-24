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
	const listint_t *slow = head, *fast = head;

	if (head == NULL)
		exit(98);

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
		node_count++;
	}

	if (slow == NULL || fast == NULL || fast->next == NULL)
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			node_count++;
		}
	}
	else
	{
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		node_count++;
		slow = slow->next;

		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			node_count++;
		}
	}
	return (node_count);
}
