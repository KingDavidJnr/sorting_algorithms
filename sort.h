#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/*Initilalizing the Comparing direction macros for the bitonic sort*/
#define UP 0
#define DOWN 1

/*enum bool - Enumeration of the boolean values*/
typedef enum bool
{
    false = 0,
    true
} bool;


/**
 * struct listint_s - Initialize Doubly linked list node
 *
 * @n: The Integer stored inside the node
 * @prev: The Pointer to the previous element in the list
 * @next: The Pointer to the next element in the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/*Helper func for the swapping*/
void swap_ints(int *a, int *b);

/*Printing the helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*Initialize the Regular functions prototypes*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
