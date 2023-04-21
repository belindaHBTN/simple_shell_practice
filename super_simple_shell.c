#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int _exec(char *cmd)
{
        char *argv[] = {cmd, NULL};

        if (execve(argv[0], argv, NULL) == -1)
        {
                perror("Error:");
        }
        return (0);
}

int main()
{
        char *buffer;
        size_t bufsize;
        size_t result;
	pid_t pid;
	int status;

	buffer = NULL;
	bufsize = 0;

	while (1)
	{
		printf("#c_is_fun$ ");

		result = getline(&buffer,&bufsize,stdin);
		if (result == -1)
		{
			printf("fail to get the input");
			free(buffer);
			return(1);
		}
		buffer = strtok(buffer, "\n");

		pid = fork();
		if (pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (pid == 0)
		{
			_exec(buffer);
		}
		else
		{
			wait(&status);
		}
	}
	free(buffer);
        return(0);
}
