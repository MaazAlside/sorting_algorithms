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
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_number = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_number])
				min_number = j;

		}
		if (min_number != i)
		{
			temp = array[min_number];
			array[min_number] = array[i];
			array[i] = temp;
		}
		print_array(array, size);
	}
}
