#include<stdio.h>
/**
 * main - A progam that print all possible combination of three digts
 * return: -  Always 0 (Success)
 */

int main(void)
{
	int i, d, p;

	for (i = '0'; i < '8'; i++)
	{
	for (d = i + 1; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	putchar(i);
	putchar(d);
	putchar(p);
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}
