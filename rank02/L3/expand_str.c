#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str = argv[1];
	int	i = 0;
	int	space = 0;

	if(argc == 2)
	{
		while(str[i] != '\0')
		{
			if(i > 0 && (str[i] == ' ' || str[i] == '\t'))
				space = 1;
			if(i > 0 && str[i] != ' ' && str[i != '\t'] && str[i] != '\0')
			{
				if(space)
					write(1, "   ", 3);
				space = 0;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
