#include<stdio.h>
int main(){
	int arr[50], temp, i, j, n;
	printf("Enter the number of elements to sort: \n");
	scanf("%d", &n);
	printf("\nEnter the elements in Array: \n");
	for(i = 0; i < n; i++){
		printf("Enter the element Number arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printf("The elements in Array = ");
	for(i = 0; i < n; i++)
	printf("%4d", arr[i]);
	// Sorting
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			if (arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\nThe Sorted Array = ");
	for(i = 0; i < n; i++)
	printf("%4d", arr[i]);
	return 0;
}


/*
OUTPUT ==>
Enter the number of elements to sort:
5

Enter the elements in Array:
Enter the element Number arr[0]: 3
Enter the element Number arr[1]: 1
Enter the element Number arr[2]: 5
Enter the element Number arr[3]: 2
Enter the element Number arr[4]: 4
The elements in Array =    3   1   5   2   4
The Sorted Array =    1   2   3   4   5
*/
