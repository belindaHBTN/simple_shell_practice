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
			token = strtok(NULL, "=");
			return (token);
		}
		i = i + 1;
	}

	return (NULL);
}

int print_directory(void)
{
	char *str;
	char *token;
	char *arr[50] = "string";


	str = _getenv("PATH");
	printf("%s\n", str);

	token = strtok(str, ":");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}

	return (0);
}

int main(void)
{
	print_directory();
	return (0);
}
