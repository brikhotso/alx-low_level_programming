#include "lists.h"

/**
 * free_listint2 -  free listint_t list
 * @head: - pointer to first item of listint_t
 *
 * Return: 0 sucess
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
