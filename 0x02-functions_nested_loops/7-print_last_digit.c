#include "main.h"
/**
 * print_last_digit - Entry point
 * @num: num is an integer
 * Description: prints the last digit of a number
 * Return: Always 0 (Success)
 */
int print_last_digit(int num)
{
	int result;

	result = num % 10;
	if (result < 0)
		result = -result;
	_putchar('0' + result);
	return (result);
}
