#include <stdio.h>
/**
 *main-program entry point to print ssingle numbers using int.
 *Return:(0) success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
