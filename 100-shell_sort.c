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
 * shell_sort - Function that sort an array of integers in ascending order
 * using the shell sort algorithm
 * @array: An array of integers
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, x, y;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (x = gap; x < size; x++)
		{
			y = x;
			while (y >= gap && array[y - gap] > array[y])
			{
				swap_int(array + y, array + (y - gap));
				y -= gap;
			}
		}
		print_array(array, size);
	}
}
