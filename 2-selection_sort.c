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
	size_t cont = 0, curr, start;
	int index = 0;

	/* Comprobar entradas */
	if (!array || !size)
	{
		return;
	}

	/* Loop que recorre la matriz */
	while (cont < size)
	{
		/* Establecer el número actual en index */
		index = array[cont];

		/* Encuentra el número más pequeño y lo pone en index */
		for (curr = cont + 1; curr < size; curr++)
		{
			if (array[curr] < index)
			{
				index = array[curr];
				start = curr;
			}
		}
		/* Si el índice actual no es el elemento más pequeño */
		if (index != array[cont])
		{
			/*
			*Intercambia los elementos hasta que el más
			*pequeño esté antes de los números más grandes
			*/

			array[start] = array[cont];
			array[cont] = index;
			print_array(array, size);
		}
		cont++;
	}
}
