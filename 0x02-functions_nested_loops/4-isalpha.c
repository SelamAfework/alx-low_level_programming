#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character
 *
 * Return: 1 if c is alphabetic , otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
