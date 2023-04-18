#include "main.h"

list_t *get_directory_list(void)
{
	char *str;
	char *token;
	list_t *head;

	head = NULL;

	str = _getenv("PATH");
	token = strtok(str, ":");
	while (token != NULL)
	{
		add_node(&head, token);
		token = strtok(NULL, ":");
	}

	return (head);
}

int main(void)
{
	list_t *head;

	head = get_directory_list();
	print_list(head);	
	return (0);
}
