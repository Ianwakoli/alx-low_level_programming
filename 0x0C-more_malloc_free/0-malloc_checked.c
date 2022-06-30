#include "main.h"
#include <stdlib.h>

/**
 *  malloc_checker - allocates memory
 *  @b: memory to allocate
 *
 *  Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
