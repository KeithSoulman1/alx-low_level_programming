#include "main.h"
/**
*swap_int - a function that swaps the values of two integers
*@a: interger 1
*@b: interger 2
*Return: 0
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
