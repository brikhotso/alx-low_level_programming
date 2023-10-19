#include "lists.h"

/**
 * free_list -  free list_t list
 * @head: - pointer so head of list_t
 *
 * Return: 0 sucess
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
