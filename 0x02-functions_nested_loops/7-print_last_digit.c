#include "main.h"
/**
 * print_last_digit - Entry point
 * @x: x is an integer
 * Description: prints the last digit of a number
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
	int last = x % 10;

	if (x < 10)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
