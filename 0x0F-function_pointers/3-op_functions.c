#include "3_calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns the sum
 * @a: first num
 * @n: secon num
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the diff
 * @a: first num
 * @b: second num
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division
 * @a: first number
 * @b: second number
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - resturns the remainder
 * @a: first num
 * b: second num
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
