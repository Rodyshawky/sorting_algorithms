#include "sort.h"

/**
 * selection_sort - A function that use selection sort algorithm.
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	int t = 0;
	size_t i, j = 0, x = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		x = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[x])
				x = j;
		}
		if (x != i)
		{
			t = array[i];
			array[i] = array[x];
			array[x] = t;
			print_array(array, size);
		}
	}
}
