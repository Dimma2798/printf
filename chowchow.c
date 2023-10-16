#include "main.h"
#include <stdio.h>

/**
 * convert_to_binary - converts an unsigned int to a binary string
 * @num: unsigned integer to convert
 * @binary: buffer to store the binary string
 * Return: The binary string representation of num
 */

char *convert_to_binary(unsigned int num, char *binary)
	{
		int q;

		for (q = 0; q < 32; q++)

			binary[q] = (num & (1 << (31 - q))) ? '1' : '0';

		binary[q] = '\0';
		return (binary);
	}
