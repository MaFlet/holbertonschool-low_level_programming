#include "main.h"
/**
*swap_int - swap value of 2 integers
*@a: first integer to swap
*@b: second integet to swap
*Return: void
*/
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
