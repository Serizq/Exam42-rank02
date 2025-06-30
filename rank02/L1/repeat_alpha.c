/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str = argv[1];
	int	i = 0;
	int	repeat;

	if(argc == 2)
	{
		while(str[i] != '\0')
		{
			char	c = str[i];
			repeat = 1;
			if(c >= 'a' && c <= 'z')
				repeat = c - 'a' + 1;
			if(c >= 'A' && c <= 'Z')
				repeat = c - 'A' + 1;
			int	j = 0;
			while(j < repeat)
			{
				write(1, &c, 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
