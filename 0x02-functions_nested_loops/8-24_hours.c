#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * starting from 00:00 to 23:59
 *
 * Return: 0 as (Success)
 */
void jack_bauer(void)
{
	int i, a;

	i=0;

	while (1<60)
	{
		j=0;

		while (a<60)
		{
			_putchar((i/10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n);
			j++;
		}
	}	i++

}
