#include "sort.h"

/**
 * selection_sort - a function that sorts an array of int
 *    in ascending order
 * @array: array of int to sort
 * @low: 0
 * @high: size of the array
 * @size: size of the array
 * Return: i
 */

int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i = low;
	int j, tmp;

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i = i + 1;
		}
	}
	tmp = array[i];
	array[i] = array[high];
	array[high] = tmp;

	print_array(array, size);
	return (i);
}

/**
 * quicksort - a function that sorts an array of int
 *    in ascending order
 * @array: array of int to sort
 * @low: 0
 * @high: size of the array
 * @size: size of the array
 * Return: /
 */

void quicksort(int *array, int low, int high, int size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}

/**
 * quick_sort - a function that sorts an array of int
 *    in ascending order
 * @array: array of int to sort
 * @size: size of the array
 * Return: /
 */

void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}	
