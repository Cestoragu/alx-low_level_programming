#include "main.h"

/**
 * binary_to_uint - converts binary number into unsigned int
 * @b: string containing binary
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_cal = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_cal = 2 * dec_cal + (b[i] - '0');
	}
	return (dec_cal);
}

