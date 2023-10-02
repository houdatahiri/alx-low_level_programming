#include "main.h"
#include <stdio.h>

/**
 * _isupper - function
 * _isupper - uppercase letters
 * _isupper(int c) - function
 * @c: charactere to chek
 * Return: 1 if c is uppercase otherwise return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
