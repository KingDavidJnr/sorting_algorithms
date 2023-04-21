#include "sort.h"

/**
 * swap_ints - Swapping the two integer values in an array.
 * @a: The first integer to be sorted.
 * @b: The second integer to be sorted.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sorting an array of integers in ascending manner
 *                  using the selection sort algorithm.
 * @array: The array of integers.
 * @size: Size of the array.
 *
 * Description: Prints the array after each sorting iteration.
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
