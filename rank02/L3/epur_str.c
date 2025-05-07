/*Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Escribe un programa que reciba una cadena de texto y la muestre con exactamente un espacio entre las palabras,
	sin espacios ni tabulaciones al principio ni al final,
	seguido de un salto de línea (\n).

Una "palabra" se define como una parte de la cadena delimitada por espacios,
	tabulaciones o por el inicio/final de la cadena.

Si el número de argumentos no es 1, o si no hay palabras que mostrar,
	el programa debe mostrar solo un salto de línea (\n).

Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat
	-e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
*/
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char *string = argv[1];
	int i = 0;
	int space;

	if (argc == 2)
	{
		while (string[i] == ' ' || string[i] == '\t') // saltamos spc y tab iniciales
			i++;
		while (string[i] != '\0')
		{
			if (string[i] == ' ' || string[i] == '\t') // si hay spc o tab , marcador a 1 pero no imprimimos
				space = 1;
			if (string[i] != ' ' && string[i] != '\t') // si encuentra caracters no spc o tab comprueba si el marcador está activo, en ese caso imprime spc, actualiza marcador a 0 e imprime caracter
			{
				if (space)
					write(1, " ", 1);
				space = 0;
				write(1, &string[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
