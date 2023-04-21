#include "main.h"

int add_env(char *name, char *value)
{
	extern char **environ;
	char **new_environ;
	int i;

	new_environ = malloc(sizeof(*new_environ) * (get_size() + 2));
	if (new_environ == NULL)
	{
		return (-1);
	}

	i = 0;
	while (environ[i] != NULL)
	{
		new_environ[i] = environ[i];
		i = i + 1;
	}
	new_environ[i] = malloc(sizeof(*new_environ[i] * (strlen(name) + strlen(value) + 2)));
	new_environ[i][0] = '\0';
	new_environ[i] = strcat(new_environ[i], name);
	new_environ[i] = strcat(new_environ[i], "=");
	new_environ[i] = strcat(new_environ[i], value);
	new_environ[i + 1] = NULL;

	environ = new_environ;
	return (0);
}
