#include <stdio.h>
#include <ctype.h>

/* main - Entry Point
 * isupper() function to check for uppercase character
 * @A: used to distinguish uppercase from lowercase
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char ch = 'A';

	/* checking uppercase */
	if (isupper(ch))
 		printf("\nEntered character is uppercase character");
 	else
		printf("\nEntered character is not uppercase character");
}
