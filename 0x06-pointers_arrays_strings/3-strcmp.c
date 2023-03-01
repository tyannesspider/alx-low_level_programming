#include "main.h"

/**
 * _strcmp- compared pointers to two strings
 * @s1: pointer to 1st string to be compared
 * @s2:pointer to 2nd string to be compared
 * Return: If str1 < str2, the negative difference of first unmatched character
 * If str1 == str2, 0.
 * If str1 > str2, positive difference of first unmatched character.
 *
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
