/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<string.h>
int count_word_in_str_way_1(char *str, char *word){
	int i = 0, length, count = 0, j = 0, freq = 0, index = 0;
	while (word[i] != '\0')
		i++;
	length = i;
	i = 0;
	while (str[i] != '\0')
	{
		while (word[j] != '\0')
		{
			if (str[i] == word[j])
				count++;
			i++;
			j++;
		}
		if (count == length)
			freq++;
		index++;
		i = index;
		j = 0;
		count = 0;
	}
	return freq;
}
int count_word_int_str_way_2_recursion(char *str, char *word){
		int i = 0, length, count = 0, j = 0;
		static int freq = 0, k = 0;
		if (str == NULL)
			return 0;
		while (word[i] != '\0')
			i++;
		length = i;
		if (*str != '\0')
		{
			while (word[j] != '\0')
			{
				if (*str == word[j])
					count++;
				*str++;
				j++;
			}
			if (count == length)
			{
				freq++;
			}
			k++;
			count_word_in_str_way_1((str + k), word);
		}
		return freq;
	}



