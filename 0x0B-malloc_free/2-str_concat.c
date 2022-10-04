#include "main.h"

/**
 * *str_concat - this concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to new sapce in memory or null
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, len, _len;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	len = strlen(s1);
	_len = strlen(s2);

	new_str = malloc(sizeof(char) * (len + _len + 1));

	if (!new_str)
		return (NULL);

	for (i = 0; i <= len + _len; i++)
		new_str[i] = i < len ? s1[i] : s2[i - len];

	return (new_str);
}
