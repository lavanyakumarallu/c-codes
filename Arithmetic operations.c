#include<stdio.h>

int main(){
	int a, b;
	printf("Enter values of a and b here: \n");
	scanf("%d %d", &a, &b);
	printf("\na value is %d and b value is %d\n", a, b);
	printf("a+b = %d\n", a + b);
	printf("a-b = %d\n", a - b);
	printf("a*b = %d\n", a * b);
	printf("a/b = %d\n", a / b);
	printf("a%%b = %d\n", a % b);
	return 0;
}
