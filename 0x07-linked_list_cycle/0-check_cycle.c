#include "lists.h"
/**
 * check_cycle - function in C that checks if a
 * singly linked list has a cycle in it.
 *
 * @list: list of nodes
 * Return: 1 if true 0 if false
 */
int check_cycle(listint_t *list)
{
	if (!list)
		return (0);

	listint_t *node_slow = list, *node_fast = list;

	while (node_fast != NULL && node_fast->next != NULL)
	{
		node_slow = node_slow->next;
		node_fast = node_fast->next->next;

		if (node_slow == node_fast)
		{
			return (1);
		}
	}
	return (0);
}
