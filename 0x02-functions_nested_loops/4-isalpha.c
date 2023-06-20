#include "main.h"

/**
 * _isalpha - function
 * @c : is the character
 * return 1 if c is a letter otherwise return 0
 */

int _isalpha(int c)
{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
