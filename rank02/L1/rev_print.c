/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/
#include <unistd.h>

int main(int argc, char **argv)
{
	char	*string;
	int	i;

	string = argv[1];
	i = 0;
	if(argc == 2)
	{
		while(string[i])
			i++; // El resultado es que i termina teniendo el valor de la longitud de la cadena.
		i--; // Resta 1 a i para posicionarse en el último índice válido de la cadena
		while(i >= 0) //Este bucle recorre la cadena hacia atrás, desde el último carácter hasta el primero.
		{
			write(1, &string[i], 1);
			i--; //escribe un solo carácter en la salida estándar (pantalla).Así que va imprimiendo la cadena en orden inverso
		}
	}
	write(1, "\n", 1);
	return(0);
}