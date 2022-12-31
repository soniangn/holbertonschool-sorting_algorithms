#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly
 *    linked list of int in ascending order
 * @list: doubly linked list of int to sort
 * Return: /
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *tmp = NULL;

	if (!list || !(*list))
		return;

	current = *list;

	while (current)
	{
		while (current->next && (current->n > current->next->n))
		{
			tmp = current->next;
			current->next = tmp->next;
			tmp->prev = current->prev;

			if (current->prev)
				current->prev->next = tmp;

			if (tmp->next)
				tmp->next->prev = current;

			current->prev = tmp;
			tmp->next = current;

			if (tmp->prev)
				current = tmp->prev;
			else
				*list = tmp;

			print_list(*list);
		}
		current = current->next;
	}
}
