#include "main.h"

int get_size(void)
{
	extern char *environ[];
	unsigned int env_size;

	env_size = 0;
	while (environ[env_size] != NULL)
	{
		env_size = env_size + 1;
	}

	return (env_size);
}
