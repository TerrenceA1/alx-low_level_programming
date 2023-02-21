#include "main.h"
/**
 *print_alphabet_x10-command entrance print_alphabet_10 times.
 *Return: (0) sucess
 */
void print_alphabet_x10(void)
{
	int nl = 0;
	char c;

	while (nl <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		nl++;
	}
}
