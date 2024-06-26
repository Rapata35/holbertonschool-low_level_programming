#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to check.
 *
 * Description: This function checks if the given character `c`
 * is a digit (0 through 9).
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
