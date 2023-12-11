#include "main.h"
/**
 * _isupper - confirm if uppercase letters
 * @c: char to confirm
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
