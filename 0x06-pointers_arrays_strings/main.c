#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char s1[98] = "Hello ";
	        char s2[] = "World!\n";
		    char *ptr;

		        printf("s1 before call: %s\n", s1);
			    printf("s2 before call: %s", s2);
			        ptr = _strcat(s1, s2);
				    printf("s1 after call: %s", s1);
				        printf("s2 after call: %s", s2);
					    printf("total: %s", ptr);
					        return (0);
}
