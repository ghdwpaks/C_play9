#include<iostream>
#include<stdio.h>
using namespace std;
int factorial(int operand,int userans) {




	
}
int main() {
	int userans1 = 0, userans2 = 0;
	cout << "Hello, World!" << endl;
	cout << "제곱수인지 궁금한 숫자를 입력해주세요./n>>";
	cin >> userans1;
	for (int i = 0; i < 100; i++)
	{
		userans2 = factorial(i,userans1);
		if (userans2 == 0)
		{
			cout <<""<< endl;
		}
	}
	

	return 0;
}