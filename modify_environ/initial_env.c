#include "main.h"

int initial_env(void)
{
	int size_env;
	char **new_environ;
	unsigned int i;
	extern char **environ;

	size_env = get_size();
	new_environ = malloc(sizeof(*new_environ) * (size_env + 1));
	if (new_environ	 == NULL)
	{
		return (-1);
	}

	i = 0;
	while (i < size_env)
	{
		new_environ[i] = strdup(environ[i]);
		if (new_environ[i] == NULL)
		{
			// Todo: need to free
			return (-1);
		}
		i = i + 1;
	}

	environ = new_environ;
	return (0);
}
