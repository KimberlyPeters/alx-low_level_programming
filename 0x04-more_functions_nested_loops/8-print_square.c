#include "main.h"
/**
 *print_square - Using the # sign print square
 * @size: print values in i and j
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
