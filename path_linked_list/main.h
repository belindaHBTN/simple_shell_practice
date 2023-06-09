#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

size_t print_list(list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);

char *_getenv(const char *name);

#endif

