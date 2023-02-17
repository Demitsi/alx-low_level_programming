#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: printing the alphabet in lowercase excluding q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet, e, q;
	
	e = 'e'; 
	q= 'q';
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	
	if (alphabet != e && alphabet != q)
	{
		putchar(alphabet);
	}
		putchar('\n');
	return (0);
}
