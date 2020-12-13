#include<stdio.h>
int main(){
	int n, i, j;
	printf("Enter the Number: \n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++)
		printf("*");
		printf("\n");
	}
	return 0;
}

/*
OUTPUT ==>
Enter the Number:
10
*
**
***
****
*****
******
*******
********
*********
**********
*/
