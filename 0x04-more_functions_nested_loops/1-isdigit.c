#include "main.h"
/**
 * _isdigit - checks if a character is digit
 * @c: carrier variable
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

