#include <stdio>
/**
 * main - a program that prints single numbers of base 10
 * return :(0) success
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
