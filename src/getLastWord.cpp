/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stddef.h>
char * get_last_word(char * str){
	
	if (str == NULL)
		return "";
	char *new_string;
	int i = 0, length, index, k = 0;
	while (str[i] != '\0')
		i++;
	length = i;
	i = i - 1;
	new_string = (char*)malloc(length*sizeof(char));
	while (str[i] == ' ' && i > 0)
		i--;
	if (i == 0)
		return "";
	else
	{
		while (str[i] != ' ' && i != 0)
			i--;
		for (index = i; str[index] != '\0'; index++)
		{
			if (str[index] == ' ')
				index++;
			new_string[k] = str[index];
			k++;
		}
		*(new_string + k) = '\0';
	}
	return new_string;
}
