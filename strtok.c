#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Hello World From Belinda And Eva";
	char *delim = " ";
	char *token;

	printf("str is %s\n", str);
	token = strtok(str, delim);
	while (token != NULL)
	{
		printf("%s\n", token);
		printf("str is %s\n", str);
		token = strtok(NULL, delim);
	}

	return (0);
}
