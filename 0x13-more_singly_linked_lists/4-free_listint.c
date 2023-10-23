#include "lists.h"

/**
 * free_listint -  free listint_t list
 * @head: - pointer to first item of listint_t
 *
 * Return: 0 sucess
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
