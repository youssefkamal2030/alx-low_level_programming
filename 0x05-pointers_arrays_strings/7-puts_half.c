#include"main.h"
#include<string.h>
/**
 *  * puts_half - prints half of a string
 *   * followed by a new line
 *    * @str: string to be printed
 */
void puts_half(char *str)
{
int n, i;
if (strlen(str) % 2 == 0)
	n = strlen(str);
else
	n = (strlen(str) - 1) / 2;
for (i = strlen(str) / 2; i < n; i++)
	_putchar(str[i]);
_putchar('\n');
}
