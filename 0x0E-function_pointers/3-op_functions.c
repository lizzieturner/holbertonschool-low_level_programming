#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition function
 * @a: argument 1
 * @b: argument 2
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: argument 1
 * @b: argument 2
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: argument 1
 * @b: argument 2
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: argument 1
 * @b: argument 2
 *
 * Return: dividend
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of divison
 * @a: argument 1
 * @b: argument 2
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
