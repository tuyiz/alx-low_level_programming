#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - A program that print all passiple combination of two digit
 * return: Always 0 (Success)
 */
int main(void)
{
	int i,d;

	for (i = '0'; i < '9'; i++)
	{
		for (d = i + 1; d <= '9'; d++)
		{
		if (d != i)
		{
		putchar(i);
		putchar(d);
		if (i == '8' && '9')
		continue;
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	putchar(' ');

	return (0);
}
