#include "sort.h"
/**
 * insertion_sort_list - entry point
 * Description: function that sorts a doubly linked list
 *            of integers in ascending order
 * @list: double pointer to the linked list
 * Return: 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *current = NULL;
	
    if (*list == NULL || list == NULL)
    {
        return;
    }

	current = *list;

	while (current->next != NULL)
	{
		node = current->next;

		if (node->n < current->n)
		{
			node->prev = current->prev;
			current->next = node->next;
			node->next = current;
			current->prev = node;

			if (node->prev != NULL) 
				node->prev->next = node;
			if (current->next != NULL)
				current->next->prev = current;
			if (node->prev != NULL)
				current = *list;
			else
				*list = node;
			print_list(*list);
		}
		else
			current = node;
	}	
}
