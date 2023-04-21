#include "sort.h"

/**
 * swap_nodes - Swapping of the two nodes in a listint_t doubly-linked list.
 * @h: The pointer to the head of the doubly-linked list.
 * @n1: The pointer to the first node to be sorted.
 * @n2: The second node to be sorted.
 */

void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}



/**
 * insertion_sort_list - sorting a doubly linked list of
 * integers in ascending manner
 * @list: The pointer to the head in the doubly linked list
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}

	}


}
