#include"main.h"
#include<string.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = strlen(str);

	while (i--)
		_putchar(str[i]);
	_putchar('\n');
}
