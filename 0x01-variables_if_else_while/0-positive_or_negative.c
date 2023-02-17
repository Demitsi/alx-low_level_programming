#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * Get the variable given (n)
 * main - Enter point  if n > 0
 * Output "is positive"
 * Else if n < 0
 * Output "is negative"
 * Else
 * Return "is zero"
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d \n", n);
/* your code goes there */
if (n > 0)
printf("is positive \n");
else if (n < 0)
printf("is negative \n");
else 
printf("is zero \n");
return (0);
}
