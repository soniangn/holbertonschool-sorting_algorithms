#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of int
 *    in ascending order
 * @array: the array of int to sort
 * @size: the size of the array
 * Return: /
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp = 0;
	size_t l = 0;

	while (l < size)
	{
		for (; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		l++;
		i = 0;
	}
}
