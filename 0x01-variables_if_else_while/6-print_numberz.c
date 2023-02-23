#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: a program that prints all single numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	/* Print all single digit numbers of base 10 */
	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
