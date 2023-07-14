#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
 *
 * Return: 0 on Seccess
 */
int main(void)
{
	int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
	if (digit < 0)
	{
	    printf("%d is %s\n", n, digit, "negative");
	}
		else if (digit > 0)
	{
	    printf("%d is %s\n", n, digit, "positive");
	}
		else
	{
	    printf("%d is %s\n", n, digit, "zero");
	}
	return (0);
}
