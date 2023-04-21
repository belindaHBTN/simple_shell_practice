#include "main.h"

int delete_env(char *name)
{
	extern char **environ;
	char **new_environ;
	unsigned int index;
	int i;

	if (get_index_p(name, &index) == -1)
	{
		return (0);
	}

	new_environ = malloc(sizeof(*new_environ) * (get_size() -1 +1));

	i = 0;
	while (environ[i] != NULL)
	{
		if (i < index)
		{
			new_environ[i] = environ[i];
		}
		else if (i > index)
		{
			new_environ[i-1] = environ[i];
		}
		i = i + 1;
	}
	new_environ[i] = NULL;

	free(environ[index]);
	free(environ);
	environ = new_environ;

	return (0);
}
