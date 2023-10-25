#include "lists.h"

/**
 * find_listint_loop - Find a loop in a list
 * @head: pointer to first item in a list
 *
 * Return: return adress of node at the beginning of a loop, NULL for no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}
