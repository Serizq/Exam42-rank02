/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/
#include <stdio.h>

int ft_atoi(const char *str)
{
    int sing = 1;
    int i = 0;
    int result = 0;

    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '-')
    {
        sing = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(sing * result);
}
int main()
{
    char *num = "-489";
    printf("el número es: %i\n", ft_atoi(num));
    return(0);
}