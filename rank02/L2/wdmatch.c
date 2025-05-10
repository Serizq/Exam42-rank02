/*Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Escribe un programa que reciba dos cadenas y compruebe si es posible escribir la primera cadena utilizando caracteres de la segunda cadena,
respetando el orden en que esos caracteres aparecen en la segunda cadena.

Si es posible, el programa debe mostrar la primera cadena,seguida de un salto de línea (\n).
Si no es posible, simplemente debe mostrar un salto de línea (\n).

Si el número de argumentos no es 2, el programa debe mostrar un salto de línea (\n).

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*string1 = argv[1];
	char	*string2 = argv[2];
	int	i = 0;
	int	j = 0;

	if(argc == 3)
	{
		while(string2[j])
		{
			if(string1[i] == string2[j])
				i++;
			j++;
		}
		if(string1[i] == '\0')
			write(1, string1, i);
	}
	write(1, "\n", 1);
	return(0);
}
