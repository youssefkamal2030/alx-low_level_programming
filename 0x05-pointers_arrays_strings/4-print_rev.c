#include"main.h"
#include<string.h>
/**
 *  * print_rev - prints a string in reverse, followed by a new line
 *   * @s: string to be printed
 */
void _puts(char *str)
{
	int i = strlen(str);

	while (i--)
		_putchar(str[i]);
	_putchar('\n');
}
