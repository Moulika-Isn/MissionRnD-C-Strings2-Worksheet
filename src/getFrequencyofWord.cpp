/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int length(char *str)
{
	int i = 0;
	while (*(str + i) != '\0')
		i++;
	return i;
}
int count_word_in_str_way_1(char *str, char *word){
	int n = 0, m = 0, i, j, count = 0, k = 0;
	n = length(str);
	m = length(word);
	for (i = 0; i < n; i++)
	{
		if(str[i]==word[0])
		{
			for (j = i, k = 0;k<m; j++,k++)
			{
				if (str[j] != word[k])
					break;
				if (k == m-1)
					count++;
			}
		}
	}
	return count;
}



int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

