#include <stdio.h>
#include <conio.h>

int main() {

	int ints[10];
	char chars[10];
	printf("ints = %dbyte\n", sizeof(ints));
	printf("chars = %dbyte\n", sizeof(chars));

	int i = 10;
	int* ip = &i;
	printf("i = %d\n", i);
	printf("ip =  %d\n", ip);
	printf("&ip = %d\n", &ip);
	printf("&i = %d\n", &i);
	printf("*ip = %d\n", *ip);

	
	

	
	return 0;
}