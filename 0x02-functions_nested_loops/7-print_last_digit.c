#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @i: character to test.
*
* Return: return the last digit
*/
int print_last_digit(int i)
{
	i %= 10;
	if (i < 0)
	{
		i *= -1;
	}
	_putchar('0' + i);
	return (i);

}
