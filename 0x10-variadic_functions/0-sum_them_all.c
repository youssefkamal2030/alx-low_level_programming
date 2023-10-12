#include<main.h>
/**
 *  * sum_them_all - returns the sum of all its parameters.
 *   * @n: amount of the arguments.
 *    *
 *     * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, int);

	int sum = 0, i;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

