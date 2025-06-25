
#include <unistd.h>
int ft_atoi(char *str)
{
	int i;
	int	result;

	i = 0;
	result = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result);
}

void	ft_putnbr(int num)
{
	char	c;
	if(num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int i;
	int	num;
	if(argc < 1)
		write(1, "\n", 1);
	if(argc == 2)
	{
		i = 1;
		num = ft_atoi(argv[1]);
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 1);
			ft_putnbr(i * num);
			write(1, "\n", 1);
			i++;
		}
	}
	return(0);
}
