/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror   | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*string = argv[1];
	int	i = 0;

	if(argc == 2)
	{
		while(string[i] != '\0')
		{
			if(string[i] >= 'a' && string[i] <= 'z')
				string[i] = 'z' - (string[i] - 'a');
			else if(string[i] >= 'A' && string[i] <= 'Z')
				string[i] = 'Z' - (string[i] <= 'A');
			write(1, &string[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}