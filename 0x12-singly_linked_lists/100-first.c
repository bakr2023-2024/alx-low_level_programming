#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void before_main(void) __attribute__((constructor));
/**
 * before_main - thank you
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
