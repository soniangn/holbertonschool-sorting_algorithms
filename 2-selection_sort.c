#include "sort.h"

/**
 * selection_sort - a function that sorts an array of int
 *    in ascending order
 * @array: array of int to sort
 * @size: size of the array
 * Return: /
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t min = 0;
	int tmp = 0;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
