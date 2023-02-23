#include "main.h"


/**
 * main- Entry Point
 *
 * print_alphabet: a program that prints all alphabets 
 * in lowercasefollowed by a new line
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
