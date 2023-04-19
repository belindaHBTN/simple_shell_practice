#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int exec(char *cmd)
{
        char *argv[] = {cmd, NULL};

        printf("the buffer in the exec: %s\n", cmd);
        if (execve(argv[0], argv, NULL) == -1)
        {
                perror("Error:");
        }
        return (0);
}

int main()
{
        char *buffer;
        size_t bufsize = 32;
        size_t characters;

        buffer = (char *)malloc(bufsize * sizeof(*buffer));
        if (buffer == NULL)
        {
                perror("Unable to allocate buffer");
                exit(1);
        }

        printf("#c_is_fun$ ");
        characters = getline(&buffer,&bufsize,stdin);
        buffer = strtok(buffer, "\n");
        printf("the buffer in the main: %s\n", buffer);
        exec(buffer);

        free(buffer);
        return(0);
}
