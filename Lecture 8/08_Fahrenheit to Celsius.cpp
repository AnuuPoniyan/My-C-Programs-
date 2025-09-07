#include<stdio.h>
int main(){
	float f;
	printf("Enter Temperature In Fahrenheit: ");
	scanf("%f", &f);
	
	float c = ((f-32)*5)/9;
	printf("Temperature In Celsius:%f", c);
	
	return 0;
}