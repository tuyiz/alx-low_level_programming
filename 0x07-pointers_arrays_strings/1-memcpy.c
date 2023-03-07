#include<stdio.h>
/**
 * _memcyp - The fuction that copy memory area
 * @dest: The area where to copy memory
 * @src: the area to be copied
 * return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return(dest);
}
