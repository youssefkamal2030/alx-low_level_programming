#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main() {
    char letter = 'a'; 

    while (letter <= 'z') {
        if (letter != 'e' && letter != 'q') {
            putchar(letter);
        }
   letter++;
    }
    putchar('\n');
    return 0;
}


