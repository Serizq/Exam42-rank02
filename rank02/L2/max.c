/*Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.******* */
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);

	int	i = 1;
	int	result = tab[0];

	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}
int	main()
{
	int	array[] = {25, 398, 2};

	printf("el número más grande es: %i\n", max(array, 3));
	return(0);
}
