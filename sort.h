#ifndef _SORT_H
#define _SORT_H


/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/* STRUCTS BY HOLBERTON */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* PROTOTYPES */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **a, listint_t **b);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap_num(int *array, size_t size, int *x, int *y);
void _partition(int *array, size_t size, size_t first, size_t second);

#endif /* _SORT_H */
