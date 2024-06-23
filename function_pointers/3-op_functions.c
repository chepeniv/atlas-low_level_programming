#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/*
 * op_add - returns the sum of the given params
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/*
 * op_add - returns the difference of the given params
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: the difference of a with b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/*
 * op_add - returns the product of the given params
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/*
 * op_add - returns the division of the first param with the second
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: quotient of a with b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/*
 * op_mod - returns the modulus of the given params
 * @a: 1st operand
 * @b: 2nd operand
 *
 * Return: modulus of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
