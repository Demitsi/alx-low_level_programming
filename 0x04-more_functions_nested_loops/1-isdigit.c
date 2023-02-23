#include "main.h"
/**
 * _isdigit - It is a function which checks for a digit between (0 through 9).
 * @c: Is an input integer
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}