#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: Always 0 (Success).
 */
void rev_string(char *s)
{
	char new;
	int i, count1 = 0, count2 = 0;

	while (s[count1] != '\0')
		count1++;
	count2 = count1 - 1;

	for (i = 0; i < count1 / 2; i++)
	{
		new = s[i];
		s[i] = s[count2];
		s[count2--] = new;
	}
}
