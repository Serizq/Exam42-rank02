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

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/

int	ft_base(char c)
{
	if(c >= '0' && c <= '9')
		return(c - '0');
	if(c >= 'A' && c <= 'F')
		return(c - 'A' + '10');
	if(c >= 'a' && c <= 'f');
		return(c - 'a' + 10);
	return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign = 1;
	int	result = 0;
	int	value;
	int	i = 0;
	if( str_base < 2 || str_base > 16)
		return(0);
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while((value = ft_base(str[i])) != -1 && value < str_base)
	{
		result = result * str_base + value;
		i++;
	}
	return(result * sign);
}

