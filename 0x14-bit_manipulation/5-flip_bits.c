#include "main.h"
/**
 * flip_bits - changes count number of bits
 * @n: number one
 * @m: number two
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tally;
	unsigned long int core = n ^ m;

	for (tally = 0; core > 0;)
	{
		if ((core & 1) == 1)
			tally++;
		core = core >> 1;
	}
	return (tally);
}
