#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - A program that print all passiple combination of two digit
 * return: Always 0 (Success)
 */
int main(void)
{
	int d,p;

	for (d = '0'; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	if (d == '8' && p == '9')
	continue;
	putchar(d);
	putchar(p);
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	putchar(' ');

	return (0);
}
