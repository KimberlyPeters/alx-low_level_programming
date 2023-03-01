#include "main.h"
/**
 * *_strcat - concatenates @src to @dest
 * @dest: increase the memory location to accomodate src
 * @src: the source string to append to @dest
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
