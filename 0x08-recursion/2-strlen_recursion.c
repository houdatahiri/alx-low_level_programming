#include "main.h"
/**
 * _strlen_recursion - returns the length
 * @s: the string to be measurd
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longint);
}
