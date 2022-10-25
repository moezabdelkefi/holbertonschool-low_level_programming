#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  string_nconcat -  a function that concatenates two strings
 *@s1:input
 *@s2:input
 *@n: variable
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	char *buffer;
	if (n >= strlen(s2)) {
		n = strlen(s2);
	}
	buffer = malloc(n * sizeof(char));

	if(s1 == NULL){
		s1 = "";
	}
	if(s2 == NULL){
		s2 = "";
	}

	strncpy(buffer, s2, n);
	array = malloc((strlen(s1) + strlen(buffer) + 1) * sizeof(char));
	strcat(array, s1);
	strcat(array, buffer);
	if(array == NULL) {
		return NULL;
	}
	return (array);
}
