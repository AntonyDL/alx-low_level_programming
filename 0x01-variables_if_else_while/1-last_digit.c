#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main-this program will assign a random number to variable n
 * each time the program is excuted
 *
 * Return: the program always return 0 when program suceeds
 * 
 * betty style doc for function main goes there 
 */

int main(void)
{
	int n; last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit - abs(n) % 10;

	if (last_digit>5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	}
	else if (last_digit ==0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %i and %i is less than 6 and not 0\n", n, last_digit);
	}

	return (0);
}
