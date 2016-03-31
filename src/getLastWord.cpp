/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char* remove_spaces(char s[100])
{
	int i, j;
	//
	char res[100];
	i = 0;
	while (s[i] == ' ')
		i++;
	for (j = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ' ') && (s[i + 1] == ' '))
			continue;
		res[j++] = s[i];
	}
	if (res[j - 1] == ' ')
		res[j - 1] = '\0';
	res[j] = '\0';
	return res;
}
char * get_last_word(char * str){
	if (str == NULL)
		return NULL;
	char *r = (char*)malloc(sizeof(char));
	int i = 0, s, len = 0, j = 0;
	while (*(str + len) != '\0')
		len++;
	for (s = len - 1; s >= 0; s--)
	{
		if (*(str + s) == ' ')
			break;
	}
	for (i = s + 1; i<len; i++)
	{
		*(r + j) = *(str + i);
		j++;
	}
	*(r + j) = '\0';
	return r;
}
