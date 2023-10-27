#include "main.h"
/**
 * prints_bin - recursive binary number to be printed
 * @n: enter decimal
 * Return: void
 */
void prints_bin(unsigned long int n)
{
	if (n == 0)
		return;
	prints_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - prints number using binary notation
 * @n: prints number in decimal
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		prints_bin(n);
	}
}
