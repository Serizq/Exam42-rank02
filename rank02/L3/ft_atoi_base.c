/* Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.
Escribe una función que convierta la cadena de caracteres str (en una base N,
	con N ≤ 16) a un número entero en base 10 y lo devuelva.

Los caracteres reconocidos en la entrada son: 0123456789abcdef.
Por supuesto,
	solo se deben tener en cuenta los caracteres válidos según la base indicada.
Por ejemplo:

La base 4 solo reconoce 0123

La base 16 reconoce 0123456789abcdef

También deben reconocerse las letras en mayúsculas:
Por ejemplo, "12fdb3" es equivalente a "12FDB3".

El signo menos ('-') solo debe interpretarse si es el primer carácter de la cadena.
Your function must be declared as follows:

int		ft_atoi_base(const char *str, int str_base);
*/
#include <stdio.h>

void	lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}
int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	j = 0;
	int	result = 0;
	int	sign = 1;
	char	base[16] = "0123456789abcdef";

	if(str_base >= 2 && str_base <= 16)
	{
		lowercase((char *) str);
		while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
			i++;
		if(str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if(str[i] == '+')
			i++;
		while(str[i] && (j = ft_strchr(base, str[i])) >= 0)
		{
			result = result * str_base;
			result = result + j;
			i++; 
		}
	}
	return(result * sign);
}