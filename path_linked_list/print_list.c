#include "main.h"

/**
 * print_list - print every node
 * @h: head node
 *
 * Description: print every node
 * Return: the number of nodes
 */

size_t print_list(list_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		i = i + 1;
	}
	return (i);
}
