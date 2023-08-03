#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint -Converts a binary number represented as a string to an unsigned int.
 * @b: A pointer to the string containing binary digits ('0' and '1').
 *
 * Return: The converted number, or 0 if there is one or more chars in the string 'b'
 * that is not '0' or '1', or if 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		  return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
