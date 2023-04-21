#include "main.h"

int get_index_p(char *name, unsigned int *index)
{
	extern char **environ;
	unsigned int i;

	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, strlen(name)) == 0)
		{
			*index = i;
			return (0);
		}
		i = i + 1;
	}

	return (-1);
}
