#include "sort.h"

int list_size(listint_t **list)
{
    int size = 0;
    listint_t *current;

    current = *list;
    while (current != NULL)
	{
		current = current->next;
		size++;
	}
    return(size);
}

/**
 * insertion_sort_list - entry point
 * Description: function that sorts a doubly linked list
 *            of integers in ascending order
 * @list: double pointer to the linked list
 * Return: 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *current = *list;
	int len = 0;
    int size = 0;
	
    size = list_size(&*list);
	current = *list;

    if (*list == NULL)
        return (NULL);
        
	while (len < size)
	{
		while (current->next != NULL)
		{
			node = current->next;

			if (node->n < current->n)
			{
				node->prev = current->prev;
				current->next = node->next;
				node->next = current;
				current->prev = node;
				node->next->prev = node;
				current->prev->next = current;
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
		len++;
	}
}
