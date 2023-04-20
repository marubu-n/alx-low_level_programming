#include <stdio.h>
/**
*main - Entry point
*
*Description: '5-printf.c'
*
*Return: Always 0 (Succuss)
*/
int main(void)
{
	 printf("Size of a char: %lu byte(s)\n", sizeof(char));
	 printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	 printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	 printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	 printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
