#include<stdio.h>
/**
 * main - A program printing single digit less than 10
 * return: Always 0 (Success)
 */

int main(void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
