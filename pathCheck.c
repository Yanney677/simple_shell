#include "main.h"
/**
 * pathCheck - a function that validates a path
 * @arg: the user input first argument
 * Return: the argument if success else null
 */
char *pathCheck(char *arg)
{
	char *path, *path2, *path3, *dir;

	path = getenv("PATH");
	path2 = strdup(path);
	dir = strtok(path2, ":");
	while (dir != NULL)
	{
		path3 = malloc(64);
		sprintf(path3, "%s/%s", dir, arg);
		if (access(path3, F_OK) == 0)
		{
			free(path2);
			return (path3);
		}
		free(path3);
		dir = strtok(NULL, ":");
	}
	free(path2);
	return (NULL);
}
