// Assignment name  : first_word
// Expected files   : first_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its first word, followed by a
// newline.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or if there are no words, simply display
// a newline.

// Examples:

// $> ./first_word "FOR PONY" | cat -e
// FOR$
// $> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
// this$
// $> ./first_word "   " | cat -e
// $
// $> ./first_word "a" "b" | cat -e
// $
// $> ./first_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		char	*new_word = argv[1];
		int	i = 0;

		while(new_word[i] == ' '|| new_word[i] == '\t')
			i++;
		while(new_word[i] != ' ' && new_word[i] != '\t' && new_word[i] != '\0')
		{
			write(1, &new_word[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}