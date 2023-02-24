#include"main.h"
/**
 * _isupper - check if letter is upper case
 * @c: The number to be used
 * Return: 1 for upper letter and 0 for any alse
 */

int _isupper(int c)
{
	if (c >=  'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
