#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		bool swapped = false;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}

		if (!swapped)
			break;
	}

}

