#include "main.h"

int set_env(char *name, char *value, int overwrite)
{
	extern char **environ;
	char **new_environ;
    	int result;
	int i;

	result = get_index(name);
	if (result == -1)
	{
		add_env(name, value);
		return (0);
	}
	else
	{
		if (overwrite == 0)
		{
			return (0);
		}
		else
		{
			delete_env(name);
			add_env(name, value);
		}
		return (0);
	}
}
