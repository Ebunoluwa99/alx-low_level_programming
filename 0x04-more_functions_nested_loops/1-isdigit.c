#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks a character whether digit or not
 * @c: member
 * Return: 1 (on success) otherwise 0
 */

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
