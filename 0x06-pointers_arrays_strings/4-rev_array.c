#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		i = a[count];
		a[count++] = a[n];
		a[n--] = i;
	}
}
