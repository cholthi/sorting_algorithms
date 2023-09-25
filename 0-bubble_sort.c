#include "sort.h"

/**
 * swap_elements - swap the value of a with b
 * @a: Input to swap
 * @b: Input to swap
 *
 */
void swap_elements(int *a, int *b)
{
	int tmp;


	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * bubble_sort - implements bubble sort algorithm for int array
 * @array: Array input to sort
 * @size: Number of elements in the input array since input is pointer
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;


	if (array ==  NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] < array[j + 1])
			{
				swap_elements(array + j, array + j + 1);
				print_array(array, size);
			}
		}
	}
}
