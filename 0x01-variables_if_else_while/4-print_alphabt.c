#include<stdio.h>
/**
 * main - A pragam that print alphabet in upper and lower cases
 * return: Always 0 (Success)
 */

int main(void)
{
        char c,e,q;
	e = 'e';
	q = 'q';

        for (c = 'a'; c <= 'z'; c++)
	{
	if (c != e && c != q)
        putchar(c);
	}
        putchar('\n');
        return (0);
}
