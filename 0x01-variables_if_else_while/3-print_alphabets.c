#include <stdio.h>

/*
 * function_main - prints alphabets in lowercase
 * @i: used as an assignment to alphabets
 *
 * Description: a program that prints the alphabets in
 * lowercase then in uppercase followed by a new line
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
