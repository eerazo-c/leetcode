#include <stdio.h>

int sum(int num1, int num2)
{
	return (num1 + num2);
}

int main()
{
	int a;
	int b;
	int suma;

	a = 5;
	b = 3;
	suma = sum(a, b);
	printf("result:%d\n", suma);
}
