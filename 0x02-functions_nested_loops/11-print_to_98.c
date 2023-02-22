#include "main.h"

/**
* print_to_98 -  prints all natural numbers from n to 98
* @n: character to test.
*
* Return: prints all natural numbers from n to 98 
*/
void print_to_98(int n)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
		sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
