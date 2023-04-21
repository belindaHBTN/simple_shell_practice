#include "main.h"

int get_index(char *name)
{
	extern char **environ;
	unsigned int i;

	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, strlen(name)) == 0)
		{
			return (0);
		}
		i = i + 1;
	}

	return (-1);
}
