#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - concentrate two strings
 * @dest: char pointer
 * @src: char pointer
 * Return: char *
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - Entry point
 * @dest: char pointer
 * @src: char pointer
 * @n: integer
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strcmp - compare two strings
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2);

/**
 * _strncpy - Entry point
 * @dest: char pointer
 * @src: char pointer
 * @n: integer
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - convert to uppercase
 *
 * Return: char 
 */

char *string_toupper(char *);

/**
 * cap_string - capitalixe each word
 * @k: word string
 *
 * Return: string
 */

char *cap_string(char *);

/**
 * leet - encode a string to 1337
 * @s: string
 *
 * Return: string
 */

char *leet(char *s);

/**
 * rot13 - encode a string using rot13
 * @s: string
 *
 * Return: string
 */

char *rot13(char *s);

/**
 * print_number - print an integer without using long arrays or pointers
 * @n: nuber to be printed
 */

void print_number(int n);

int _putchar(char c);
