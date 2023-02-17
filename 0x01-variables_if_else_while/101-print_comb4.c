#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n, k;

	for (i = 0; i <= 7; i++)
	{
	for (n = i + 1; n <= 8; n++)
	{
	for (k = n + 1; k <= 9; k++)
	{
		putchar((i % 10) + '0');
		putchar((n % 10) + '0');
		putchar((k % 10) + '0');
		if (i == n || i == k)
			continue;
		else if (i == 7 && n == 8 && k == 9)
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
	}
	putchar('\n');
	return (0);
}
