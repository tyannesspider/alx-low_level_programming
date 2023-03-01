#include "main.h"

/**
 * _strcmp - compared pointers to two strings
 * @s1: pointer to 1st string to be compared
 * @s2:pointer to 2nd string to be compared
 * Return : if str1 < str2, the negative diff of first unmatched charcters
 * If str1 == str2, 0.
 * If str1 > str2, psositive diff of first unmatched char
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
