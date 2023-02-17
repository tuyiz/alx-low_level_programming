#include<stdio.h>
/**
 * main - A program that prints alphabets in reverse order
 * return: Always 0 (Success)
 */
int main(void)
{
	char c;
	
	for (c = 'z'; c >= 'a'; c--)
	putchar(c);
	putchar('\n');
	return (0);
}
