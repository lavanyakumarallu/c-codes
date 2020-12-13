#include<stdio.h>
int main(){
	int num, r, c = 1, d = 0;
	printf("Enter the Number:\n");
	scanf("%d", &num);
	printf("Given number is %d.\n", num);
	while (c <= num){
		r = num % c;
		if (r == 0)
		d++;
		c++;
	}
	if (d == 2)
	printf("%d is a Prime Number.", num);
	else
	printf("%d is not a Prime Number.", num);
	return 0;
}

/*
OUTPUT ==>
Ex. 1)-->
Enter the Number:
17
Given number is 17.
17 is a Prime Number.

Ex. 2)-->
Enter the Number:
12
Given number is 12.
12 is not a Prime Number.
*/
