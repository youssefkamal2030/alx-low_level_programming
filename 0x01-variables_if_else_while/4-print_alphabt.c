#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 int i;

for ( i = 'a'; i <= 'z'; i++)
{
if ((char) i == 'p' || (char) i == 'q')
continue;
else
putchar(i);
}
putchar('\n');
return (0);
}

