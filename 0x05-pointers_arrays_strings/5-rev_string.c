#include"main.h"
#include<string.h>
/**
 *  * rev_string - reverses a string
 *   * @s: string to be reversed
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s + strlen(str) - 1;

	while (strat < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
