/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	printed[256] = {0};
	int		i = 0;
	char	*string1 = argv[1];
	char	*string2 = argv[2];
	int		j;
	if(argc == 3)
	{
		while (string1[i])
		{
			j = 0;
			while (string2[j])
			{
				if (string1[i] == string2[j] && printed[string1[i]] == 0) // si el carácter es igual en las dos cadena y todavía no ha sido imprimido
				{
					write(1, &string1[i], 1);
					printed[string1[i]] = 1; // actualizo y marco el carácter como impreso
					break; // se puede suprimir pero evita seguir recorriendo s2 una vez que has encontrado la coincidencia, es más eficiente
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
