#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function Prints the numbers, followed by new line.
 * @separator: string to be printed between the numbers.
 * @n: The number of integers passed to function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nos;
	unsigned int k;

	va_start(nos, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(nos, int));

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nos);
}

