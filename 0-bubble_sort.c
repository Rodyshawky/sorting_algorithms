#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, j, swap = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1] && array[j])
			{
			swap = array[j];
			array[j] = array[j + 1];
			array[j + 1] = swap;
			print_array(array, size);
			}
		}
}
