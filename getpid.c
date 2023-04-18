#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();

	printf("The child process id is %u\n", pid);
	printf("The parent process id is %u\n", ppid);

	return (0);
}
