#include "main.h"

/**
 * *str_concat - this concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to new sapce in memory or null
 */
char *str_concat(char *s1, char *s2)
{
	char *strDup;

	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strDup = malloc(sizeof(char) * (i + j + 1));
	if (strDup == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strDup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strDup[j] = s2[j];
		j++;
	}
	strDup[i] = '\0';
	return (strDup);
}
