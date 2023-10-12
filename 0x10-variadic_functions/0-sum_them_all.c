#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns sum of all arguments
 * @n: number of arguments passed to function
 * @...: A variable number of arguments to calculate the sum
 *
 * Return: If n == 0 - 0.
 *         Otherwise - sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list kz;
	unsigned int y, sum = 0;

	va_start(kz, n);

	for (y = 0; y < n; y++)
		sum += va_arg(kz, int);

	va_end(kz);

	return (sum);
}
