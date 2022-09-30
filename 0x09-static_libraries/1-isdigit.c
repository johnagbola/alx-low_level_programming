#include "main.h"

/**
 * _isdigit - this func checks for digits.
 * @c: local parameter
 * Return: 1 or 0 (Success or Fail)
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
