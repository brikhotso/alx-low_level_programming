#include "lists.h"

/**
 * add_node_end - add new nod at the end of t_list
 * @head: node to check
 * @str: string to check
 *
 * Return: adress of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int dup_len = 0;
	char *dup;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (dup[dup_len] != '\0')
	{
		dup_len++;
	}
	new_node->str = dup;
	new_node->len = dup_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
