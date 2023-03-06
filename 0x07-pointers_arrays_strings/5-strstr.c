#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: entire string to be searched.
 * @needle: substring to be located.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
