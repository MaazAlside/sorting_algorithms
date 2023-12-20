#include "sort.h"

/**
 * selection_sort - Sorts an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_number;
	int temp, swapped;

	if (!array || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min_number = i;
		swapped = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_number])
			{
				min_number = j;
				swapped = 1;
			}
		}
		if (swapped)
		{
			temp = array[min_number];
			array[min_number] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}

