#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int	main(int argc, char **argv)
{
	int	number1 = 0;
	int	number2 = 0;
	int	result = 0;

	if(argc == 4)
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[3]);

		if(argv[2][0] == '+')
			result = number1 + number2;
		if(argv[2][0] == '-')
			result = number1 - number2;
		if(argv[2][0] == '*')
			result = number1 * number2;
		if(argv[2][0] == '/')
			result = number1 / number2;
		printf("el resultado es: %d", result);
	}
	printf("\n");
	return(0);
}