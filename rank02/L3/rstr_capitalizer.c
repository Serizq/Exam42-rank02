#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;

	if(argc > 1)
	{
		while(i < argc)
		{
			j = 0;
			while(argv[i][j] != '\0')
			{
				if(argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] += 32;
				if(argv[i][j] >= 'a' && argv[i][j] <= 'z' && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0'))
					argv[i][j] -= 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);

}
