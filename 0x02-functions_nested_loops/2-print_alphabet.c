#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
char print_alphabet(void);
int main(void)
{
    print_alphabet();
    return (0);
}
char print_alphabet(void)
{
    int i,j;
    for(j=0;j<10;j++)
    {
        for(i='a';i<='z';i++)
            putchar(i);
        putchar('\n');
    }



}