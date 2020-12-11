#include<stdio.h>
int main(){
	int a, n, t, rev = 0;
	printf("Enter the Number: \n");
	scanf("%d", &n);
	t = n;
	printf("\nGiven number is %d ", t);
	while (n > 0){
		a = n % 10;
		rev = rev * 10 + a;
		n = n / 10;
	}
	printf("and it\'s reverse is %d.\n", rev);
	if (t == rev)
	printf("%d is an Palindrome Number.", t);
	else
	printf("%d is not an Palindrome Number.", t);
}
