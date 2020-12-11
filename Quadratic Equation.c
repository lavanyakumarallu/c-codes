#include<stdio.h>
#include<math.h>

int main(){
	int s;
	float r1, r2, disc, a, b, c;
	printf("Enter the values of a,b and c:\n");
	scanf("%f %f %f", &a, &b, &c);
	disc = (b * b) - (4 * a * c);
	if (disc > 0)
	s = 1;
	else if (disc == 0)
	s = 2;
	else
	s = 3;
	
	switch(s){
		case 1:
			printf("There are two distinct roots.\n");
			r1 = (-b - sqrt(disc)) / (2 * a);
			r2 = (-b + sqrt(disc)) / (2 * a);
			printf("r1 = %f and r2 = %f", r1, r2);
			break;
		case 2:
			printf("There roots are real and equal.\n");
			r1 = (-b - sqrt(disc)) / (2 * a);
			r2 = (-b + sqrt(disc)) / (2 * a);
			printf("r1 = %f and r2 = %f", r1, r2);
			break;
		case 3:
			printf("There roots are not real and imaginary.\n");
			break;
	}
	return 0;
}
