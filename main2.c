#include <stdio.h>


int main() {
	printf("started program\n");

	int a = 10, b = 15;
	int c;
	
	c = (a > b) ? 100 : 200;
	printf("c = %d\n", c);
	printf("c = %d\n", a > b ? 100 : 200);
	printf("a가 b보다 크다는것은 %s.\n", a > b ? "사실입니다" : "사실이아닙니다");




	return 0;
}
