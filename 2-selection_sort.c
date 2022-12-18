#include "sort.h"
/**
 * selection_sort - entry point
 * Description: function that sorts an array
 *            of integers in ascending order using the 
                selection sort algorithm
 * @array: the array of integers
 * @size: size of the array
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
    size_t j = i + 1;
    int min;
    int index = 0;
	int tmp = 0;

    for (; i < size; i++)
    {
        min = array[i];
        for (; j < size; j++)
        {
            if (min > array[j])
            {
                min = array[j]; 
                index = j;    
            }
        }
        tmp = array[i];
        array[i] = min;
        array[index] = tmp;
        print_array(array, size);

        min = 0;
        j = i + 1;
    }
}
