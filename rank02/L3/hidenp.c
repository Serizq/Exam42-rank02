#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s1 = argv[1];
	char	*s2 = argv[2];
	int	i = 0;
	int	j = 0;
	if(argc != 3)
		write(1, "\n", 1);
	if(argc == 3)
	{
		while(s2[j])
		{
			if(s1[i] == s2[j])
				i++;
			j++;
		}
		if(s1[i] == '\0')
			write(1, "1\n", 2);
		else
			write(1, "0\n", 2);
	}
	return(0);
}
