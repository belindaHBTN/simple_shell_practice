#include "main.h"

int main(int argc, char **argv)
{
	int overwrite;

	overwrite = atoi(argv[3]);
	set_env(argv[1], argv[2], overwrite);
	print_env();
	printf("up add 1 new pair================================\n");

	return (0);
}
