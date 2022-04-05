#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
   char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[2] = " ";
   char *token;
   char **p;
   int i = 0;
   p = (char **)malloc(sizeof(char *)*10);
   /* get the first token */
   token = strtok(str, s);
   
   /* walk through other tokens */
   while( token != NULL ) {
	p[i] = token;
	i++;
      token = strtok(NULL, s);
   }
   for(int j = 0; j < i; j++)
   {
	   printf( " %s\n", p[j]);
   }
   free(p);
   return(0);
}