#include "sort.h"

/**
 * swap_int - Function that swap two integers in an array
 * @a: The first integer to swap
 * @b: The second integer to swap
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: An array of integers
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t x, y;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min = array + x;
		for (y = x + 1; y < size; y++)
			min = (array[y] < *min) ? (array + y) : min;

		if ((array + x) != min)
		{
			swap_int(array + x, min);
			print_array(array, size);
		}
	}
}
