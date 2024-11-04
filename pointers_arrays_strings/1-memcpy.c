#include "main.h"

/**
* _memcpy - fills memory with byte
* @dest: points to the memory
* @src: points to source
* @n: numbers of times to insert char
* Return: (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
