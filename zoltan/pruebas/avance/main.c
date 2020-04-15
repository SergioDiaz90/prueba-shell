#include "shell.h"

int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av, char **env)
{
	ssize_t bytes_read;
	size_t size = 0;
	char *args = NULL, **arr = NULL;
	pid_t pid;
	int counter = 0;

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		counter++;
		printf("$ ");
		bytes_read = getline(&args, &size, stdin);
		if (bytes_read == -1)
		{
			free(args);
			return (0);
		}
		if (*args == '\n' || *args == '\t' || *args == '.')
			continue;
		else
		{
			arr = create_arr(args, env);
			pid = fork();
			if (pid > 0)
				wait(&pid);
			else if (pid == 0)
			{
				if (!arr)
				{
					printf("arr es NULL\n");
					continue;
				}
				else
				{
					if (execve(arr[0], arr, NULL) == -1)
						perror("Error: execve == -1");
				}
			}
			else
				perror("Error: pid < 0");
		}
		free_all(arr);
	}
	free(args);
	return (0);
}
