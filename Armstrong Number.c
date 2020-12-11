#include<stdio.h>
int main(){
	int a, n, t, b = 0;
	printf("Enter the Number: \n");
	scanf("%d", &n);
	t = n;
	printf("\nGiven number is %d\n", t);
	while (n > 0){
		a = n % 10;
		b = b + (a * a * a);
		n = n / 10;
	}
	if (t == b)
	printf("%d is an Armstrong Number.", t);
	else
	printf("%d is not an Armstrong Number.", t);
}
