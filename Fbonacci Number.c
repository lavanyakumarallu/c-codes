#include<stdio.h>
int main(){
	int num, c = 2, f1 = 0, f2 = 1, f3;
	printf("Enter the limit of Fibonacci Series: \n");
	scanf("%d", &num);
	printf("The Fibonacci series = %4d%4d", f1, f2);
	while(c < num){
		f3 = f1 + f2;
		printf("%4d", f3);
		f1 = f2;
		f2 = f3;
		c++;
	}
	return 0;
}

/*
OUTPUT ==>
Enter the limit of Fibonacci Series:
12
The Fibonacci series =    0   1   1   2   3   5   8  13  21  34  55  89
*/
