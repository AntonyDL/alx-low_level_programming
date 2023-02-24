#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there*/

/*main-a program that prints whether the number stored
 * in the variable n is positive or negative
 *
 * Return: program always return's a 0 as success
 */

int main(void)
{
	int n;
	{
		srand(time(0));
		n = rand() - RAND_MAX / 2;
	}

	/* your code goes there */
	
	double num;
	printf("Enter a number: ");
	scanf("%lf", &num);

	if (num > 0.0)
		printf(&num, "is positive" );
	else if (num == 0)
		ptintf(&num, "is zero" );
	else
		printf(&num "is negative" );

	printf(" "\n);
	return 0;
}
