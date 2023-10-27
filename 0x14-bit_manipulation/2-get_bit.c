#include "main.h"
/**
 * get_bit - gets value of bit given at index
 * @index: index of bit to be gotten
 * @n: number to check bits
 *
 * Return: integer 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k;
	unsigned long int get;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	k = 1 << index;
	get = n & k;
	if (get == k)
		return (1);
	return (0);
}
