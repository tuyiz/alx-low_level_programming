#include<stdio.h>
/**
 * main - A program that print possible combination of numbers less than 10
 * return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	
	return (0);
}
