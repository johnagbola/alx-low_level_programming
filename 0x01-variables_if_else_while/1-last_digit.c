#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to variable n, when executed.
 * function prints if number is greater than 5, equals to 0
 * also func prints less than 6 and not equal to 0.
 *
 * Return: Always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n" );
	}
	else if (n % 10 == 0)
	{
		printf("and is 0\n" );
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("and is less than 6 and not 0\n" );
	}
	return (0);
}
