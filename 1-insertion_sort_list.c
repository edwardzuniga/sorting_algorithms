#include "sort.h"

/**
 * swap_nodes - swap two nodes
 * @a: first node
 * @b: second node
 * Return: void
 */

void swap_nodes(listint_t **a, listint_t **b)
{
	(*a)->next = (*b)->next;
	(*b)->prev = (*a)->prev;
	if ((*b)->next)
		(*b)->next->prev = (*a);
	if ((*a)->prev)
		(*a)->prev->next = (*b);
	(*b)->next = (*a);
	(*a)->prev = (*b);
}

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: head of list to sort
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *value = NULL, *prev = NULL;

	if (list && *list && (*list)->next)
	{
		temp = (*list)->next;

		while (temp) /* Iterar hasta el final de la lista */
		{
			value = temp;
			prev = temp->prev;

			/* Si los valores no son ascendentes */
			while (prev && value->n < prev->n)
			{
				swap_nodes(&prev, &value);
				if (prev == *list) /* Si value ahora encabeza la lista */
					*list = value;
				print_list(*list);
				/* if (value->prev != NULL) si no está al principio de la lista */
				prev = value->prev;
			}
			temp = temp->next;
		}
	}
}
