#include "sort.h"

/**
* lomuto_partition - Lomuto partition scheme for QuickSort.
* @arr: Array to be partitioned.
* @low: Starting index of the partition.
* @high: Ending index of the partition.
* @size: Size of the array.
*
* Return: the pivot
*/
int lomuto_partition(int arr[], int low, int high, size_t size)
{
	int pivot, i, j, temp;

	i = low - 1;
	pivot = arr[high];

	for (j = low; j <= high; j++)
	{

		if (arr[j] < pivot)
		{
			i++;

			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	print_array(arr, size);

	return (i + 1);
}

/**
* _quick_sort - Recursive implementation of the QuickSort algorithm.
* @arr: Array to be sorted.
* @low: Starting index of the partition.
* @high: Ending index of the partition.
* @size: Size of the array.
*
*/
void _quick_sort(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pi;

		pi = lomuto_partition(arr, low, high, size);

		_quick_sort(arr, low, pi - 1, size);
		_quick_sort(arr, pi + 1, high, size);
	}
}

/**
* quick_sort - Sorts an array of integers in ascending order using QuickSort.
* @array: Array to be sorted.
* @size: Size of the array.
*
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	_quick_sort(array, 0, size - 1, size);
}
