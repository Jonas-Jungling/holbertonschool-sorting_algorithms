#include "sort.h"

/**
* swap - Swaps two elements in an array.
* @arr: The array containing elements.
* @i: The index of the first element.
* @j: The index of the second element.
*/
void swap(int *arr, int i, int j)
{
	int temp = arr[i];

	arr[i] = arr[j];
	arr[j] = temp;
}

/**
* bubble_sort - Sorts an array of integers in ascending order
* using the Bubble sort algorithm.
* @array: The array to be sorted.
* @size: The size of the array.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}
