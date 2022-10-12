#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
   
   return (dest);
}
