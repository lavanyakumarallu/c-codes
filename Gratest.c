#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter values of a, b and c :\n");\
	scanf("%d %d %d", &a, &b, &c);
	printf("\na = %d, b = %d, c = %d\n", a, b, c);
	if (a > b && a > c)
	printf("a is grater then b and c");
	else if (b > c)
	printf("b is grater then a nd c");
	else
	printf("c is grater then a nd b");
	return 0;
}
