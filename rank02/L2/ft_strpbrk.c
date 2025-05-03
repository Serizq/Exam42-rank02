/* Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
// Su propósito principal es buscar en una cadena (string) la primera ocurrencia de 
// cualquiera de un conjunto de caracteres especificado.
// @Parámetros
// s1: Es un puntero a la cadena de entrada en la que se desea buscar.
// s2: Es un puntero a la cadena que contiene los caracteres a buscar.
// @Retorno
// Devuelve un puntero a la primera ocurrencia de cualquiera de los caracteres de s2 en s1.
// Si no se encuentra ningún carácter de s2 en s1, la función devuelve NULL. */
#include <stdio.h>

char    *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;

    while(s1[i])
    {
        int j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
                return(char *)&s1[i];
            j++;
        }
        i++;
    }
    return(NULL);
}
int main()
{
    char    *string1 = "Sergio Izquierdo";
    char    *string2 = "ktgh";

    printf("%s", ft_strpbrk(string1, string2));
    return(0);
}
