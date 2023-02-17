#include <stdio.h>
/**
 * main - Prints the size of various types on the computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b,
	long int c;
	long long int d;
	float f;
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(int));
	printf("size of long long int: %lu byte(s)\n", sizeof(int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
