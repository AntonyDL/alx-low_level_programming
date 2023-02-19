#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/* main - a program that prints whether the number stored
 * in the variable n is positive or negative
 *
 * Return: program always return's a 0 as success
 */

int main(void)
	{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		printf ("%i is positive");
	else if (n==0)
		printf ("%i is zero");
	else
		printf ("%i is negative\n", n);		
	}
	return (0);
}
