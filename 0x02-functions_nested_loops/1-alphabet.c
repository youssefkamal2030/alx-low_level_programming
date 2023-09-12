#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  _putchar - writes the character c to stdout
 * @c: the character to print
 *  Return: on success 1.
 *          on error , -1 is returned, and errno is set appropriately
 */
char print_alphabet(void);
int main(void)
{
    print_alphabet();
    return (0);
}
char print_alphabet(void)
{
    int i;
    for(i='a';i<='z';i++)
        putchar(i);

    putchar('\n');
}
