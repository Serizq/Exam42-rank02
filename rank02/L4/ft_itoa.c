#include <stdlib.h>

int	ft_count_len(int n)
{
	int	len;

	len = 0;
	if(n <= 0)
		len++;
	while(n != 0)
	{
		len++;
		n = n / 10;
	}
	return(len);
}
char	*ft_itoa(int nbr)
{
	int	len;
	long	num;
	char	*str_nbr;

	num = nbr;
	len = ft_count_len(nbr);
	str_nbr = malloc((len + 1) * sizeof(char));
	if(!str_nbr)
		return(NULL);
	str_nbr[len] = '\0';
	if(num == 0)
	{
		str_nbr[0] = '0';
		return(str_nbr);

	if(num < 0)
	{
		str_nbr[0] = '-';
		num = -num;
	}
	while(num > 0)
	{
		str_nbr[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return(str_nbr);
}
