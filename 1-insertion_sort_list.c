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
	listint_t *node = NULL, *current, *azy;
    int size = 0;
    int len = 0;

    azy = *list;
    while (azy != NULL)
    {
        azy = azy->next;
        size++;
    }
    current = *list;
    while (len < size)
    {
        
        while (current->next != NULL)
        {
            node = current->next;
            
            if (node->n < current->n)
            {
              /*  tmp1 = node->prev;
                tmp2 = current->next;*/
                
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
