#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_token(char *str, char *delim )
{
	char *tokenized_str;
	char *token;
	int i;

	tokenized_str = strdup(str);

	i = 0;
	token = strtok(tokenized_str, delim);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		i = i + 1;
	}
	
	return (i);
}

int main()
{
	char str[] = "Hello World From Belinda And Eva";
	char *delim = " ";
	int num_token;
	char **argv;
	int i;
	char *token;

	printf("string is %s, number of token is %d\n", str, num_token);
	num_token = count_token(str, delim);
	printf("string is %s, number of token is %d\n", str, num_token);

	argv = malloc(sizeof(char *) * num_token);
	if (argv == NULL)
	{
		return (-1);
	}

	i = 0;
	token = strtok(str, delim);
	while (token != NULL)
	{	
		argv[i] = token;
		printf("the %d th token is: %s\n", i, argv[i]);
		token = strtok(NULL, delim);
		i = i + 1;
	}


	return (0);
}
