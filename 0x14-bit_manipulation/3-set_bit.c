#include "main.h"

/**
* sets a bit at a given index to  then points to the number to change
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}


