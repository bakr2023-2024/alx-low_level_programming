#include <stdio.h>
/**
 * Description:  A column of asterisks on the left side,
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;
	for(i=0;i<sizeof(msg);i++){
		putchar(msg[i]);
	}
	return (1);
}
