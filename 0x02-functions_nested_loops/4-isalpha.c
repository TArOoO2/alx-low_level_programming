#include "main.h"

/**
* _isalpha - check if the given input is in alphapet.
* @c: character to test.
*
* Return: 1 (True) else 0 (False)
*/
int _isalpha(int c)
{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
