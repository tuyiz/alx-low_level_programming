#include<stdio.h>
/**
 * puts2 - Print every other charactor of a string
 * @str: The string to be treated
 * Return: void
 */

void puts(char *str)

{
	int i;
	int j = 0;

	while(str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
