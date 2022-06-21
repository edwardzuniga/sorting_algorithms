#include "sort.h"

/**
 * bubble_sort - function that sorts an array
 * @array: is the array of integers
 * @size: is the size of the array
 *
 * Return: Value
 */

void bubble_sort(int *array, size_t size)
{
	size_t cont1, cont2;
	int temp;

	/* Comprobar entradas */
	if (array == NULL || size == 0)
		return;

	/* Cuenta a través del paso actual en la ordenación */
	for (cont1 = 0; cont1 < size - 1; cont1++)
	{
		/* Recorre la matrix */
		for (cont2 = 0; cont2 < size - 1; cont2++)
		{
			if (array[cont2] > array[cont2 + 1])
			{
				/* Intercambio de a[i] con a[1 + 1] */
				temp = array[cont2];
				array[cont2] = array[cont2 + 1];
				array[cont2 + 1] = temp;
				/* Imprime el resultado */
				print_array(array, size);
			}
		}
	}
}
