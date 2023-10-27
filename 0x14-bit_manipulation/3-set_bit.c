#include "main.h"
/**
 * set_bit - function sets bit of a number to 1
 * @n: pointer to the bit to set
 * @index: set position of bit
 * Return: 1 on success or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int dex;

	if (index > (sizeof(unsigned int) * 8 - 1))
		return (-1);
	dex = 1 << index;
	*n = *n | dex;
	return (1);
}
