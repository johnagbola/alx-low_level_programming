#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - A function that allocates memory using malloc
 * @a: integer variable dat holds the memory size
 * Author: Sammykingx
 * Return: 0 means program was successful
 */
void *malloc_checked(unsigned int a)
{
	void *ptr;

	ptr = malloc(a);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
