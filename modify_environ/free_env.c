#include "main.h"

void free_env()
{
	extern char **environ;
	unsigned i;

	i = 0;
	while (environ[i] != NULL)
	{
		free(environ[i]);
		i = i + 1;
	}
}
