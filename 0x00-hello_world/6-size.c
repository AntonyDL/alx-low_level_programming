#include <stdio.h>

/**
 *main-Entry Point 
 * Description: a program that prints the size of various
 * types on the computer it is compiled and run on
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	long int b;
	char d;
	long long int c;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	
	return (0);
}
