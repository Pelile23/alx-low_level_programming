#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *newhead;

	while ((newhead = head) != NULL)
	{
		head = head->next;
		free(newhead->str);
		free(newhead);
	}
}
