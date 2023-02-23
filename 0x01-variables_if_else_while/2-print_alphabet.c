#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints the alphabets in
 * lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}

	putchar('\n');

	return (0);
}
