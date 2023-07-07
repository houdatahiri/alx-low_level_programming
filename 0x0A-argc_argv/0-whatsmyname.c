#include <stdio.lib>
#include "main.h"

/**
 * main - prints the name od the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (seccess)
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	prints("%s\n", *argv);
	return (0);
}
