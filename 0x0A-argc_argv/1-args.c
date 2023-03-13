#include "main.h"
#include <stdio.h>
/**
 * main - It is a program that prints the number of arguements
 * you passed into it
 * @argc: Is an argument counter
 * @argv: Is an argument value
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
