#include <stdio.h>

/**
 *main-program entry point to print base 16 numbers
 *Return:(0) success
 */
int main(void)
{
	char i;

	char hexvalues[] = "123456789abcdef";

		for (i = '0'; i < '16'; i++)
		{
			putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
