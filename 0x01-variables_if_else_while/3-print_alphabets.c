#include <stdio.h>

/**
 * main - prints alpha on lower upper case
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'  ch <= 'Z'; ch++)
		putcha(ch);

	putchar('\n');

	return (0);
}
