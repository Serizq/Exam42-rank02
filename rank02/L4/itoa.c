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
 #include <stdio.h>
 #include <stdlib.h>

int	count_digits(int n)
{
	int	len = 0;
	
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
	int	len = count_digits(nbr);
	char	*str = malloc(len + 1);
	if(!str)
		return(NULL);
	str[len] = '\0';
	if(nbr == 0)
	{
		str[0] = '0';
		return(str);
	}
	if(nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while(nbr > 0)
	{
		str[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return(str);
}
int	main()
{
	printf("%s", ft_itoa(458));
	return(0);
}