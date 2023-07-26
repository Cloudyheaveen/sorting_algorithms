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
 * bubble_sort - Function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: An array of integers to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (x = 0; x < len - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap_int(array + x, array + x + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
