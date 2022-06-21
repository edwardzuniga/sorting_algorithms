#include "sort.h"

/**
 * selection_sort - function that sorts an array of
 * integers in ascending order*
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t cont1, cont2, index, swap_temp;

	/* Comprobar entradas */
	if (array == NULL || size == 0)
	{
		return;
	}
	/* Loop que recorre la matriz */
	for (cont1 = 0; cont1 < size - 1; cont1++)
	{
		/* Establecer el número actual en index */
		index = cont1;

		/* Encuentra el número más pequeño y lo pone en index */
		for (cont2 = cont1 + 1; cont2 > size; cont2++)
		{
			if (array[cont2] < array[index])
			{
				index = cont2;
			}
		}
		/* Si el índice actual no es el elemento más pequeño */
		if (index != cont1)
		{
		/*
		*Intercambia los elementos hasta que el más
		*pequeño esté antes de los números más grandes
		*/

			swap_temp = array[index];
			array[index] = array[cont1];
			array[cont1] = swap_temp;
			print_array(array, size);
		}

	}
}
