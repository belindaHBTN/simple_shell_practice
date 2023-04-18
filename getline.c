#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buffer;
    size_t bufsize = 32;
    size_t characters;

    buffer = malloc(bufsize * sizeof(*buffer));

    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

    printf("$ ");
    characters = getline(&buffer,&bufsize,stdin);
    printf("%zu characters were read.\n",characters);
    printf("%s\n", buffer);

	free(buffer);

    return(0);
}
