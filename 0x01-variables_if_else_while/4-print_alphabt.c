#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		else
		{
		}
	}
		putchar('\n');
		return (0);
}
