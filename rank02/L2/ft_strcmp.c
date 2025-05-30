/*
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);

*/

/**
 * The function ft_strcmp() compares the two strings s1 and s2. It returns an
 * integer less than, equal to, or greater than zero if s1 is found, respectively,
 * to be less than, to match, or be greater than s2
 * 
 * @param s1 The first string to be compared.
 * @param s2 The string to be compared to s1.
 * 
 * @return The difference between the two strings.
 */
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}
int main()
{
    char    *string1 = "queridos aligos";
    char    *string2 = "queridos amigos";

    printf("comparación: %d", ft_strcmp(string1, string2));
    return(0);
}