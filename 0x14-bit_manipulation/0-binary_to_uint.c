#include "main.h"
/**
 * binary_to_uint - converts binary numbers to unsigned integer
 * @b: pointer to string  containing binary number
 * Return: output in converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int nos;

	nos = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		nos <<= 1;
		if (b[k] == '1')
			nos += 1;
	}
	return (nos);
}
