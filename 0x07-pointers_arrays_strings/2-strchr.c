#include<stdio.h>
/**
 * _strchr - Entry point
 * @s: Input
 * @c: Input
 * Return: Always0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for(; s[i] >= '\0'; i++)
	{
		if(s[i] == c)
			return (&s[i]);
	}
	return(0);
}
