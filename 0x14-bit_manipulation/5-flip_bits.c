#include "main.h"
/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The starting number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip > 0)
	{
		if ((flip & 1) == 1)
			count++;
		flip >>= 1;
	}

	return (count);
}
