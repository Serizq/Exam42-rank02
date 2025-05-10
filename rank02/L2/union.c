/*Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.
The display will be in the order characters appear in the command line, and
will be followed by a \n.
If the number of arguments is not 2, the program displays \n.

Escribe un programa que reciba dos cadenas de texto y muestre, sin duplicados, los caracteres que aparecen en al menos una de las dos cadenas.
La salida debe mostrar los caracteres en el orden en que aparecen en la línea de comandos, y debe terminar con un salto de línea (\n).
Si el número de argumentos no es 2, el programa debe mostrar un salto de línea (\n).

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>*/
#include <unistd.h>

int	main(int argc, char *argv[])
{

	if(argc == 3)
	{
		int	i = 1;
		int	ascii[255] = {0};
		while(i < 3)
		{
			int	j = 0;
			while(argv[i][j])
			{
				if(ascii[argv[i][j]] == 0)
				{
					write(1, &argv[i][j], 1);
					ascii[argv[i][j]] = 1;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

