#include "main.h"
/**
 *  * _strlen_recursion - Returns the length of a string.
 *   * @s: The string to be measured.
 *    *
 *     * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int ct = 0;

	if (*s)
	{
		ct++;
		ct += _strlen_recursion(s + 1);

	}
	return (ct);
}
