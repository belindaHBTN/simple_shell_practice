#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *_getenv(const char *name)
{
	extern char **environ;
	int i;
	char *token;

	i = 0;
	while (environ[i] != NULL)
	{
		token = strtok(environ[i], "=");
		if (strcmp(token, name) == 0)
		{
			printf("variable: %s\n", token);
			token = strtok(NULL, "=");
			printf("value: %s\n", token);
			return (token);
		}
		i = i + 1;
	}

	return (NULL);
}


int main(int argc, char *argv[])
{
	char *value;

	value = _getenv(argv[1]);
	printf("value to the main function: %s\n", value);

	return (0);
}
