#include "lists.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - function that adds a new node at the beginning of  list_t list
 * @head: head of linked list
 * @str: string to be used as data for node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *string;
	int length;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	if (str == NULL)
	{
		string = NULL;
		length = 0;
	}
	else
	{
		string = strdup(str);
		length = _strlen(str);
	}
	newnode->len = length;
	newnode->str = string;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
