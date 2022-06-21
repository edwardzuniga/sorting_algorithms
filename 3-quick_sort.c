#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size array
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		_partition(array, size, 0, size - 1);
}
/**
 * _partition - sorts partition according to base
 * @array: original array
 * @size: size of original array
 * @first: first element of partition
 * @second: second element of partition
 */
void _partition(int *array, size_t size, size_t first, size_t second)
{
	int base = array[second]; /* La base es el último elemento */
	size_t a, b;

	/* Si el primer elemento es menor que el segundo*/
	if (first < second)
	{
		for (a = b = first; b < second; b++)
		{
			if (array[b] <= base)
			{
				swap_num(array, size, &array[b], &array[a]);
				a++;
			}
		}
		swap_num(array, size, &array[b], &array[a]);

		/* Partición menor */
		if (a > 0)
			_partition(array, size, first, a - 1);
		/* Partición mayor */
		_partition(array, size, a + 1, second);
	}
}
/**
 * swap_num - swap value of array numbers
 * @array: array for print
 * @size: size of array for print
 * @x: pointer to array number
 * @y: pointer to array number
 */
void swap_num(int *array, size_t size, int *x, int *y)
{
	int tmp;

	if (*x != *y)
	{
		tmp = *x;
		*x = *y;
		*y = tmp;
		print_array(array, size); /* Imprime la matriz actualizada */
	}
}
