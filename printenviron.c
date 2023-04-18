#include <stdio.h>
#include <unistd.h>

extern char **environ;
int i = 0;

int main()
{
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i = i + 1;
	}

	return (0);
}
