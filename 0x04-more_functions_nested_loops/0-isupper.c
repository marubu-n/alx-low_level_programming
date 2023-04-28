#include <stdio.h>
#include <main.h>

/**
* _isupper - function that checks for uppercase character.
* @x: the int for the paramaters of my function
* Return: 0
*/

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	else
	return (0);
}
