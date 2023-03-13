#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, count = 0, n = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
	}
	count += ac;
	arg = (char *)malloc((count + 1) * sizeof(char));

	if (arg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[n] = av[i][j];
			n++;
		}
		if (arg[n] == '\0')
		{
			arg[n++] = '\n';
		}
	}
	return (arg);
}
