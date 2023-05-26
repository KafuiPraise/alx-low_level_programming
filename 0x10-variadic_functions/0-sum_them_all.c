#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all its parameters will be returned
 * @n: parameters passed to the function.
 * @...: To calculate the sum of variable number of paramters
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
