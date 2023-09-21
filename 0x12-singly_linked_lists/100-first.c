#include <stdio.h>
void before_main(void) __attribute__((constructor));
/**
 * before_main - thank you
 */
void before_main(void)
{
	char *s1 = "You're beat! and yet you must allow,\n";
	char *s2 = "I bore my house upon my back!\n";

	printf("%s%s", s1, s2);
}
