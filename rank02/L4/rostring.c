/*Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$> */

int	main(int argc, char **argv)
{
	int	i = 0;
	int	start = 0;
	int	end = 0;
	int	first = 1;

	if (argc > 1)
	{
		char *str = argv[1];

		// Saltar espacios iniciales
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		end = i;

		// Imprimir el resto de palabras
		while (str[i])
		{
			// Saltar espacios
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			if (!str[i])
				break;
			if (!first)
				write(1, " ", 1);
			first = 0;
			// Imprimir palabra
			while (str[i] && str[i] != ' ' && str[i] != '\t')
				write(1, &str[i++], 1);
		}

		// Imprimir la primera palabra
		if (start < end)
		{
			if (!first)
				write(1, " ", 1);
			while (start < end)
				write(1, &str[start++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
