#include "main.h"
/**
 * pathCheck - a function that validates a path
 * @arg: the user input first argument
 * Return: the argument if success else null
 */
int pathCheck(char *arg)
{
	char *path, *path2, *path3, *dir, *temp;

	if ((_strcmp2(arg, "/bin/") == 0))
		temp = _changer(arg);
	else
		temp = arg;
	path = getenv("PATH");
	path2 = strdup(path);
	dir = strtok(path2, ":");
	while (dir != NULL)
	{
		path3 = malloc(64);
		sprintf(path3, "%s/%s", dir, temp);
		if (access(path3, F_OK) == 0)
		{
			free(path2);
			free(temp);
			free(path3);
			return (1);
		}
		free(path3);
		dir = strtok(NULL, ":");
	}
	free(temp);
	free(path2);
	return (-1);
}