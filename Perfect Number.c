#include<stdio.h>
int main(){
	int num, sumf = 0, c = 1;
	printf("Enter the Number: \n");
	scanf("%d", &num);
	printf("Given Number is %d", num);
	printf(" and the Factors of number are :\n");
	while (c < num){
		if (num % c == 0){
			sumf = sumf + c;
			printf("%4d", c);
		}
		c++;
	}
	printf("\nSum of Factors of %d = %d.\n", num, sumf);
	if (num == sumf)
	printf("%d is a Perfect Number.", num);
	else
	printf("%d is not a Perfect Number", num);
	return 0;
}

/*
OUTPUT ==>
Ex. 1)-->
Enter the Number:
496
Given Number is 496 and the Factors of number are :
   1   2   4   8  16  31  62 124 248
Sum of Factors of 496 = 496.
496 is a Perfect Number.

Ex. 2)-->
Enter the Number:
34
Given Number is 34 and the Factors of number are :
   1   2  17
Sum of Factors of 34 = 20.
34 is not a Perfect Number
*/

