#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i;

	if (n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		 _putchar('\n');
	}
}
