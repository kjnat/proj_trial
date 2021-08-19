#include <stdio.h>
#include <unistd.h>

/**
 * main - execve_fork example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
    pid_t my_pid;
    pid_t pid;

    printf("Before execve\n");
    printf("Before fork\n");
    pid = fork();
    if ((execve(argv[0], argv, NULL) == -1) && (pid == -1))
    {
        perror("Error:");
        return (1);
    }
    printf("After execve\n");
    printf("\n");
    printf("After fork\n");
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    return (0);
}
