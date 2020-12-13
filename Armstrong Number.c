#include<stdio.h>
int main(){
	int a, n, t, count = 0, b = 0;
	printf("Enter the Number: \n");
	scanf("%d", &n);
	t = n;
	while(t != 0){
		t = t/10;
		count++;
	}
	t = n;
	printf("\nGiven number is %d\n", t);
	while (t > 0){
		a = t % 10;
		int cnt = count, mul = 1;
		while(cnt != 0){
			mul = mul * a;
			cnt--;
		}
		b = b + mul;
		cnt = count;
		t = t / 10;
		mul = 1;
	}
	if (n == b)
	printf("%d is an Armstrong Number.", n);
	else
	printf("%d is not an Armstrong Number.", n);
}

/*
OUTPUT ==>
Ex. 1)-->
Enter the Number:
371

Given number is 371
371 is an Armstrong Number.

Ex. 2)-->
Enter the Number:
569

Given number is 569
569 is not an Armstrong Number.
*/
