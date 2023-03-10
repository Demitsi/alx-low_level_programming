#include "main.h"
int is_divisible(int num, int div);
/**
 * is_prime_number - Is a function which checks if a number is prime.
 * @n: Is an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}
/**
 * is_divisible - checks if num is divisible
 * @num: Is the number to be checked
 * @div: Is the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
