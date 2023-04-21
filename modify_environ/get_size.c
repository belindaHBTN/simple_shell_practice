#include "main.h"

int get_size(void)
{
	extern char **environ;
	int size_env;

	size_env = 0;
	while (environ[size_env] != NULL)
	{
		size_env = size_env + 1;
	}

	return (size_env);
}
