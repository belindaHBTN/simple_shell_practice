#include <stdio.h>

int main(__attribute__((unused))int ac, char **av)
{
	int i;

	i = 0;
	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i = i + 1;
	}

	return (0);
}
