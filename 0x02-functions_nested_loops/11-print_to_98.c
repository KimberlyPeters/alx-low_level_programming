#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: starting integer, value increases
 * or decreases, depending on input
 * Description: prints all natural number from n - 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
