#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 * main - Entry point for the program
 *
 * This function is the entry point for the program. It sets up the initial
 * environment and calls other functions as needed to perform program tasks.
 *
 * Return: Always returns zero.
 */
int main(void)
{
pid_t pid;
int status;
char *args[] = {"ls", "-l", "/tmp", NULL};
for (int i = 0; i < 5; i++)
{
pid = fork();
if (pid == -1)
{
perror("fork");
return (1);
}
else if (pid == 0)
{
printf("Child %d executing ls -l /tmp\n", i);
execv("/bin/ls", args);
perror("execv");
return (1);
}
else
{
wait(&status);
printf("Child %d exited with status %d\n", i, WEXITSTATUS(status));
}
}
return (0);
}
