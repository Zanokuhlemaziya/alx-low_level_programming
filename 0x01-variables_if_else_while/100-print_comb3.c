#include <stdio.h>
/**
 * main - main block
 * Description: write a program that prints all possible
 * different combinations of two digits
 * numbers must be separated by  ,, followed by a space
 * The two digit must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * print only the smallest combination of two digit
 * Number should be printes in ascending order, with two digits
 * You can only use tge putchar function
 * (every other function (printf, puts, atc..) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
	        	{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 10)
				{
		        	      putchar(',');
	                              puctchar(' ');
				   }

		                }
 
		        	c + +;
			}
			d++;
		}
		putchar('\n');
		return (0);
}