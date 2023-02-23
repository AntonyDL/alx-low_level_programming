#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point print alphabet lowercase
 *
 * Return: always 0 (Sucess)
 */

int main(void)
{
	char A;

	for (A = 'a'; A <= 'Z'; A++)
	{
	putchar(A);
	}
	putchar('\n');

	return (0);
}
