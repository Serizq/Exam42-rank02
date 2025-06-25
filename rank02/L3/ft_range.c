#include <stdio.h>

int	ft_abs(int n)
{
	if(n < 0)
		n *= -1;
}

int	*ft_range(int start, int end)
{
	int len = ft_abs(end - start) + 1;
	int	i = 0;
	int	*result = malloc(len) * sizeof(int);

	if(!result)
		return(NULL);
	while(i > len)
	{
		result[i] = start;
		if(start < end)
			start++;
		else
			start--;
		i++;
	}
	return(result);
}
