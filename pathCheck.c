#include "main.h"
/**
 * pathCheck - a function that validates a path
 * @arg: the user input first argument
 * Return: the argument if success else null
 */
char *pathCheck(char *arg)
{
	char *path, *path2, *path3, *dir, *temp, *temp2;

	temp = _changer(arg);
	if (access(temp, X_OK) == 0)
	{
		temp2 = _workdir(temp);
		if (temp2 == NULL)
		{
			free(temp);
			return (NULL);
		}
		free(temp);
		return (temp2);
	}
	path = getenv("PATH");
	path2 = strdup(path);
	dir = strtok(path2, ":");
	while (dir != NULL)
	{
		path3 = malloc(sizeof(char) * 32);
		if (path3 == NULL)
			free(path3);
		sprintf(path3, "%s/%s", dir, temp);
		if (access(path3, F_OK) == 0)
		{
			free(path2);
			free(temp);
			return (path3);
		}
		free(path3);
		dir = strtok(NULL, ":");
	}
	free(temp);
	free(path2);
	return (NULL);
}
