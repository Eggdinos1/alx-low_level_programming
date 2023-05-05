#include "main.h"

/**
* sets the value of a given bit to 0  and  pointer to the number to change
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}


