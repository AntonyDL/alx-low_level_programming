#include <stdio.h>

/*
 * main - Entry point of a program
 *
 * Description: a program that print the alphabets in
 * lowercase then in uppercase follwed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
