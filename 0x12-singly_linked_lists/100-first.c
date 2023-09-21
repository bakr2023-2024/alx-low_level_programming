#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void before_main(void) __attribute__((constructor));
/**
 * before_main - thank you
 */
void before_main(void)
{
	char *s1 = strdup("You're beat! and yet you must allow,\n");
	char *s2 = strdup("I bore my house upon my back!\n");

	printf("%s%s", s1, s2);
	free(s1);
	free(s2);
}
