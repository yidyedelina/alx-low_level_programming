#include <stdio.h>

int main(void){
	char a;
	a = 'a';
	while(a <= 'z'){
		putchar(a);
		a++;
	}
	printf("end");
	return (0);
}