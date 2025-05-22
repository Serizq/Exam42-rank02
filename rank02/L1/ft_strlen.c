#include <stdio.h>

int	ft_strlen(char *s)
{
	int	len;

	while(s[len] != '\0')
		len++;
	return(len);
}
int	main()
{
	char *string = "Sergio";

	printf("la longitud es: %i\n", ft_strlen(string));
	return(0);
}