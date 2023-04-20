#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_size(void)
{
	extern char *environ[];
	int size_env;

	size_env = 0;
	while (environ[size_env] != NULl)
	{
		size_env = size_env + 1;
	}

	return (size_env);
}

int get_index(char *name, int *index)
{
	extern char *environ[];
	int i;
	int len_name;

	len_name = strlen(name);

	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, len_name) == 0)
		{
			*index = i;
			return (0);
		}
		i = i + 1;
	}

	return (-1);
}

void initial_env(void)
{
	int size_env;
	char *new_environ[];
	int i;
	extern char *environ[];

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
}

char *find_value(char *name)
{
	int i;
	extern char *environ[];
	int len_name;

	len_name = strlen(name);

	i = 0;
	while (environp[i] != NULL)
	{
		if (name != NULL)
		{
			if (strncmp(environ[i], name, len_name) == 0)
			{
				return (environ[i] + len_name + 1);
			}
		}
		i = i + 1;
	}

	return (NULL);
}

int delete_env(char *name)
{
	extern char *environ[];
	int index;
	char *new_environ[];

	if (get_index(name, &index) == -1)
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
			new_environ[i-1] = envrion[i];
		}
		i = i + 1;
	}
	new_environ[i] = NULL;

	free(environ[index]);
	free(environ);
	environ = new_environ;

	return (0);
}



int set_env(char *name, char *value, int overwrite)
{
	char *value;
	extern char *environ[];
	char *new_environ[];
	ini i;


	value = find_value(name);
	if (value == NULL)
	{
		add_env(name, value, overwrite);
		return (0);
	}
	else
	{
		if (overwirte == 0)
		{
			return (0);
		}
		else
		{
			delete_env(name);
			add_env(name, value, overwrite);
		}
		return (0);
	}
}

int add_env(char *name, char *value, int overwrite)
{
	extern char **environ;
	char *new_environ[];
	int i;
	int len_name;
	int len_value;

	len_str = strlen(

	new_environ = malloc(sizeof(*new_env) * (get_size() + 2);
	if (new_environ == NULL)
	{
		return (-1);
	}
	while (environ[i] != NULL)
	{
		new_environ[i] = environ[i];
		i = i + 1;
	}
	new_environ[i] = malloc(sizeof(*new_environ[i] * (len_name + len_value + 2)));
	new_environ[i] 
}



int main(void)
{
	initial_env();
}
