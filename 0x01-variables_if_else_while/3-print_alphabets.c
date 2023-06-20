#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 *
 * Return: Always 0
 *
 */
int main(void)
{

	char n = '0';
	char t = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (t <= 'f')
	{
		putchar(t);
		t++;
	}
	putchar('\n');

	return (0);
}


