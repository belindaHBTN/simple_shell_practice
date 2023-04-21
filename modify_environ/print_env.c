#include "main.h"

void print_env()
{
	extern char **environ;
	int i;

	i = 0;
	while (environ[i] != NULL)
	{
		printf ("%s\n", environ[i]);
		i = i + 1;
	}
}
