#include "main.h"
/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, count = 0, half = 0;

	for (i = 0; str[i]; i += 1)
		if (str[i] != '\0')
			count += 1;
		else
			break;

	if (count % 2 == 0)
		half = count / 2;
	else
		half = (count - 1) / 2;
	for (i = half; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
