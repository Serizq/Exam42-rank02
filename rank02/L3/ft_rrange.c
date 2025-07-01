/*Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0. */

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
