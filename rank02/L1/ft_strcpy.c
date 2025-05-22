/*
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *dst, char *src);
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dst, char *src)
{
	int	i;
	i = 0;

	while(src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}

int	main()
{
	char src[] = "perro";
	char *dst = malloc(strlen(src) + 1 * sizeof(char));
	if(!dst)
		return(NULL);

	printf("la copia es: %s\n", ft_strcpy(dst, src));
	free(dst);
	return(0);
}
