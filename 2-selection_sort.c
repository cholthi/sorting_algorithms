#include "sort.h"

/**
 * swap_elements - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_elements(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - performs selection sort on int array input
 * @array: Int array input to sort
 * @size: The size of the int array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t min_pos;
	size_t i, j;


	for (i = 0; i < size - 1; i++)
	{
		min_pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_pos] < array[j])
				min_pos = j;
		}
		if (min_pos != i)
		{
			swap_elements(&array[i], &array[min_pos]);
			print_array(array, size);
		}
	}
}
