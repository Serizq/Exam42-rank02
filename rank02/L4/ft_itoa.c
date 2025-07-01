/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);*/


// Se calcula la longitud necesaria para representar el número como una cadena.
// Se asigna memoria dinámicamente para la cadena.
// Se llena la cadena con los dígitos del número, comenzando desde el final.
// Se manejan casos especiales para números negativos y cero.
// Se devuelve la cadena resultante.
#include <stdlib.h>

int	ft_count_len(int n)
{
	int	len;

	len = 0;
	if(n <= 0)
		len++;
	while(n != 0)
	{
		len++;
		n = n / 10;
	}
	return(len);
}
char	*ft_itoa(int nbr)
{
	int	len;
	long	num;
	char	*str_nbr;

	num = nbr;
	len = ft_count_len(nbr);
	str_nbr = malloc((len + 1) * sizeof(char));
	if(!str_nbr)
		return(NULL);
	str_nbr[len] = '\0';
	if(num == 0)
	{
		str_nbr[0] = '0';
		return(str_nbr);

	if(num < 0)
	{
		str_nbr[0] = '-';
		num = -num;
	}
	while(num > 0)
	{
		str_nbr[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return(str_nbr);
}
