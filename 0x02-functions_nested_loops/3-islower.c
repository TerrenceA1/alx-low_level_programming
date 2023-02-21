#include "main.h"

/**
*_islower-program entry checking if a character is lowercase
*@c: to be checked
*Return:(1)success
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
