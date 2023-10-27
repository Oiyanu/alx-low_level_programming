#include "main.h"
/**
 * get_endianness - checks byte arrangement
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int k;
	char *z;

	k = 1;
	z = (char *)&k;
	return (*z);
}
