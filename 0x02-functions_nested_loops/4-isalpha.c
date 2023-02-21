#include"main.h"
/**
 * _isalpha - chacks for alphabet charactors
 * @c : the charactor to be checked
 * return: for alphabet 1 and 0 for other 
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else 
	return (0);
}

