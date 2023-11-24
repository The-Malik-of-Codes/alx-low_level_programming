#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, position;
	int no;

	if (!b)
		return (0);

	for (no = 0; b[no]; no++)
		;
	no--;
	for (position = 1, uint = 0; no >= 0; no--)
	{
		if (b[no] == '0')
		{
			position *= 2;
			continue;
		}
		else if (b[no] == '1')
		{
			uint += position;
			position *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}

