#incldue "main.h"
/**
 * _memcpy - function that copies*
 * @dest: memory
 * @src: memory
 * @n: number of bytes
 * Return copied memory
 */
char *_mempcy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
