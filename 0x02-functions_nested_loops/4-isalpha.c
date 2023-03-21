#include "main.h"


	/**
	 * _isalpha - return 1 if c is a letter, return 0 otherwise
	 * @c: the character to be checked
	 * Return: 1 if c is a letter, 0 otherwise
	 */
	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}

