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
	if (str == "" || str == '\0')
		return "";

	char *new_string;
	int i = 0, length, index, k = 0;
	while (str[i] != '\0')
		i++;
	length = i;
	if (length == 0)
		return str;
	i = i - 1;
	if (str == '\0')
		return "";
	new_string = (char*)malloc(length*sizeof(char));
	while (str[i] == ' ' && i > 0)
		i--;
	if (i == 0 && str[i] != ' ')
	{
		new_string[i] = str[i];
		*(new_string + i + 1) = '\0';
		return new_string;
	}
	if (i == 0)
		return "";

	else
	{
		while (str[i] != ' ' && i != 0)
			i--;
		if (i == 0)
			for (index = i; str[index] != '\0'; index++)
			{
				if (str[index] == ' ')
					break;
				else
				{
					new_string[k] = str[index];
					k++;
				}
			}
		else
			for (index = i + 1; str[index] != '\0'; index++)
			{
				if (str[index] == ' ')
					break;
				else
				{
					new_string[k] = str[index];
					k++;
				}
			}
		*(new_string + k) = '\0';
	}
	return new_string;
}
