#include <stdio.h>


int main() {
	printf("started program\n");

	int a = 10, b = 15;
	int c;
	
	c = (a > b) ? 100 : 200;
	printf("c = %d\n", c);
	printf("c = %d\n", a > b ? 100 : 200);
	printf("a�� b���� ũ�ٴ°��� %s.\n", a > b ? "����Դϴ�" : "����̾ƴմϴ�");




	return 0;
}
