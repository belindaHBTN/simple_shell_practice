#include "main.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: the address of the head node
 * @str: the string in the list_t list
 *
 * Description: add a new nod at the beginning of a list_t list
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
