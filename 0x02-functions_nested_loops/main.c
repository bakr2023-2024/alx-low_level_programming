#include <stdio.h>
#include "main.h"
int main(void){
int r = print_sign(98);
putchar(r+'0');
putchar('\n');
r = print_sign(0);
putchar(r+'0');
putchar('\n');
r = print_sign(-1);
putchar(r+'0');
putchar('\n');
return 0;
}
