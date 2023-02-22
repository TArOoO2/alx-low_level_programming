#include "main.h"
/**
 * _abs - prints the absolute value
 * @n: Number to be tested
 *
 *
 * Return: 1 if positive and greater than zero, 0 if is Zero, and -1 if neg.
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	return (i);
}
