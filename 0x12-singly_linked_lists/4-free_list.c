#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: head of a linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *camp;

	while (head != NULL)
	{
		camp = head->next;
		free(head->str);
		free(head);
		head = camp;
	}
}
