/*Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.
Escribe un programa llamado hidenp que reciba dos cadenas y muestre 1 seguido de un salto de línea si la primera cadena está oculta dentro de la segunda. En caso contrario, debe mostrar 0 seguido de un salto de línea.

Sean s1 y s2 dos cadenas. Decimos que s1 está oculta en s2 si es posible encontrar cada carácter de s1 dentro de s2, en el mismo orden en que aparecen en s1, aunque no necesariamente de forma consecutiva.

Además, la cadena vacía está oculta en cualquier cadena.

Si el número de argumentos no es 2, el programa debe mostrar solo un salto de línea.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$> */
#include <unistd.h>

int main(int argc, char *argv[])
{
	char	*s1 = argv[1];
	char	*s2 = argv[2];
	int	i = 0;
	int	j = 0;

	if(argc == 3)
	{
		while(s1[i] && s2[j])
		{
			if(s1[i] == s2[j])
				i++;
			j++;
		}
		if(s1[i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}