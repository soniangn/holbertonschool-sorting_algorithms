#include "sort.h"

/**
 * bubble_sort - entry point
 * Description: function that sorts an array
 *            of integers in ascending order
 * @array: the array of integers
 * @size: size of the array
 * Return: 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t len = 0;
	int tmp = 0;

	while (len < size)
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
		len++;
		i = 0;
	}

}
