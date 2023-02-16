#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	float f;
	int i;
	long int lt;
	long long int llt;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llt));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
