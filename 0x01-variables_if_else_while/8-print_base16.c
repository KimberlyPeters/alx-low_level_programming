#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
