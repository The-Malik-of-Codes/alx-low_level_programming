#include "main.h"
/**
 *get_endianness - this function checks foe endianness
 *Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int second = 1;
	char *first = (char *)&second;

	if (*first)
		return (1);
	else
		return (0);
}

