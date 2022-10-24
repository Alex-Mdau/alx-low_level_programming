#include "lists.h"

/**
 * free_list - This is a function to free list
 * @head: a pointer to a head
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
