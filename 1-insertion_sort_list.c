#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * @list: Pointer to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *current, *next;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = *list;

	while (current)
	{
		next = current->next;

		while (current->prev && current->n < current->prev->n)
		{
			prev = current->prev;

			prev->next = current->next;

			if (current->next)
				current->next->prev = prev;

			current->prev = prev->prev;
			current->next = prev;
			if (prev->prev)
				prev->prev->next = current;
			else
				*list = current;

			prev->prev = current;
			print_list(*list);
		}
		current = next;
	}
}
