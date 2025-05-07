/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}
void	ft_putnbr(int number)
{
	char	c;

	if (number >= 10)
		ft_putnbr(number / 10);
	c = (number % 10) + '0';
	write(1, &c, 1);
}
int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		int sum = 0;
		while (num > 0)
		{
			if (is_prime(num))
				sum = sum + num;
			num--;
		}
		ft_putnbr(sum);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
