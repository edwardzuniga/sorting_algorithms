# include "sort.h"

/**
 * bubble_sort - function that sorts an array
 * @array: is the array of integers
 * @size: is the size of the array
 *
 * Return: Value
 */

void bubble_sort(int *array, size_t size)
{
	size_t cont, val;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (cont = 0; cont < size - 1; cont++)
	{
		for (val = 0; val < size - cont - 1; val++)
		{
			if (array[val] > array[val + 1])
			{
				tmp = array[val];
				array[val] = array[val + 1];
				array[val + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
