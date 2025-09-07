#include<stdio.h>
int main(){
	float c, f;
	printf("Enter Temperature In Celsius: ");
	scanf("%f", &c);
	
	printf("Temperature In Fahrenheit:%f", ((c*9/5)+ 32));
	
	return 0;
}