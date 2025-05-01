// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup_string;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	dup_string = (char *)malloc((len + 1) * sizeof(char));
	len = 0;
	while (src[len] != '\0')
	{
		dup_string[len] = src[len];
		len++;
	}
	dup_string[len] = '\0';
	return (dup_string);
}
int	main(void)
{
	char *string = "Como estás";
	printf("la cadena duplicada es: %s", ft_strdup(string));
	return (0);
}