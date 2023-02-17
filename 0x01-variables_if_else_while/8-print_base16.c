#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for(n = 0; n < 10; n++)
	{
		putchar(n);
	}

	for(ch = 'a'; n < 'g'; ch++)
        {
                putchar(ch);
        }
	putchar('\n');
	return (0);
}
