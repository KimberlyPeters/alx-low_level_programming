#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i <= 8; i++)
	{
	for (n = i + 1; n <= 9; n++)
	{
		putchar((i % 10) + '0');
		putchar((n % 10) + '0');

		if (i == n)
			continue;
		else if (i == 8 && n == 9)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
