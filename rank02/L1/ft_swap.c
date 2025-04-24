/*
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
*/
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp; // no tiene que ser puntero porque solo vamos a guardar el valor de a

	temp = *a;
	*a = *b;
	*b = temp;
}
int	main(void)
{
	int a = 15;
	int b = 2;

	ft_swap(&a, &b);
	printf("pasamos la función %d, %d", a, b);
	return (0);
}