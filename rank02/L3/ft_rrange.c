#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int n)
{
	if(n < 0)
		n *= -1;
	return(n);
}
int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	len = ft_abs(end - start) + 1;
	int	*result = malloc((len) * sizeof(int));

	if(!result)
		return(NULL);
	while(i < len)
	{
		result[i] = end;
		if(start < end)
			end--;
		else
			end++;
		i++;
	}
	return(result);
}
int	main(void)
{
	int	*arr;
	int	i;
	int	start = 3;
	int	end = 7;
	int	len = ft_abs(end - start) + 1;

	arr = ft_rrange(start, end);
	if (!arr)
	{
		printf("Error: malloc falló\n");
		return (1);
	}
	printf("ft_rrange(%d, %d) → ", start, end);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
	return (0);
}
