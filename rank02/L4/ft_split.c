/* Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str); */
#include <stdlib.h>

char	**ft_split(char *str)
{
	int	i; // para recorrer el str
	int	j; // para rellenar nuestro str
	int	k; // para cada palabra
	char	**split;

	i = 0;
	k = 0;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if(!(split = (char**)malloc(sizeof(char *) * 256))) // reservamos para 256 palabras... suficientes.
		return(NULL);
	while(str[i] != '\0')
	{
		j =0;
		if(!(split[k] = (char *)malloc(sizeof(char) * 4096))) // reservamos 4096 caracteres por palabra
			return(NULL);
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			split[k][j++] = str[i++]; //rellenamos la palabra
		split[k][j] = '\0'; // finalizamos la palabra con el nulo
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		k++; // pasamos a la siguiente palabra
	}
	split[k] = NULL; // cerramos con NULL
	return(split);
}
