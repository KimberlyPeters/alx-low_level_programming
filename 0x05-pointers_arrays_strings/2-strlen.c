#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: input string
 * Return: return the value of string length
 */
int _strlen(char *s)
{
	int count = 0, i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != '\0')
			count += 1;
		else
			break;
	}
	return (count);
}
