// Print Float Number to 2 decimals only.

#include<stdio.h>
int main(){
	float a;
	printf("Enter a float number: ");
	scanf("%f", &a);
	
	printf("Number rounded to 2 decimal places is:%.2f\n", a);
	return 0;
	

}
