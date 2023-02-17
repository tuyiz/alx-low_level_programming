#include<stdio.h>
/**
 * main - A pragam that print alphabet in upper and lower cases
 * return: Always 0 (Success)
 */

int main(void)
{
        char c;

        for (c = 'a'; c <= 'z'; c++)
        putchar(c);
        putchar('\n');
        return (0);
}
