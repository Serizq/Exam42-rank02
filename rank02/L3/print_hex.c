/* Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$ */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;

	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result);
}

void	print_hex(int num)
{
	char	hex[] = "0123456789abcdef";

	if(num >= 16)
		print_hex(num / 16);
	write(1, &hex[num%16], 1);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return(0);
}

