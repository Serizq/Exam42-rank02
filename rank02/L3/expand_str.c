/* Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>
*/
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*string = argv[1];
	int	i = 0;
	int	space;
	int	first = 1; //evita que se imprima antes de la primera palabra

	if (argc == 2)
	{
		while (string[i] == ' ' || string[i] == '\t') // saltamos spc y tab iniciales
			i++;
		while (string[i] != '\0')
		{
			if (string[i] == ' ' || string[i] == '\t') // si hay spc o tab , marcador a 1 pero no imprimimos
				space = 1;
			if (string[i] != ' ' && string[i] != '\t')
			{
				if (space && !first) // si space está activo y no es la primera palabra... imprime 3 espacios
					write(1, "   ", 3);
				space = 0;
				write(1, &string[i], 1);
				first = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}