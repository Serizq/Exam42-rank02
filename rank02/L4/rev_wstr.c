/*Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free

Escribe un programa que reciba una cadena como parámetro y que imprima sus palabras en orden inverso.
Una "palabra" se define como una parte de la cadena delimitada por espacios y/o tabulaciones, o por el inicio/final de la cadena.
Si el número de parámetros es distinto de 1, el programa debe mostrar solo un salto de línea (\n).
En los parámetros que se usarán para probar el programa no habrá espacios adicionales
(es decir, no habrá espacios al principio ni al final de la cadena, y las palabras estarán siempre separadas por exactamente un espacio).
Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$> */
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str = argv[1];
	int	i = 0;
	int	start; // marca inicio de palabra
	int	end; // marcar el final de la palabra;
	int first_word = 1; // evita poner espacio antes de la primera palabra

	if(argc == 2)
	{
		while(str[i] != '\0')
			i++;
		i--;
		while(i >= 0)
		{
			end = i; // último índice de la palabra
			while(i >= 0 && str[i] != ' ' && str[i] != '\t')
				i--; // indice del espacio entre palabras
			start = i + 1; // primer indice de la palabra
			if(!first_word)
				write(1, " ", 1);
			while(start <= end)
				write(1, &str[start++], 1);
			first_word = 0;
			i--;
		}
	}
	write(1, "\n", 1);
	return(0);
}
