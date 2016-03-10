/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int i = 0,k=0,j;
	char ch;
strrev(input);
for (i = 0; i <= len; i++)
{
	if (input[i] == ' ' || input[i] == '\0')
	{
		j = i;
		for (j ; j < len; j++)
		{
			if (input[j] == ' ')
			{
			}
			else
				break;
		}
		
		i--;
		while (k <i)
		{
			ch = input[k];
			input[k] = input[i];
			input[i] = ch; k++; i--;
		}
		i = j; k = i;
	}
	else{}

}
}

