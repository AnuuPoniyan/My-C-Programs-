#include<stdio.h>
int main(){
	int a;
	printf("Enter your Char/Int: ");
	if(scanf("%d", &a) == 1){
		printf("The input is Integer.");
	}
	else{
		printf("The input is Character.");
	}
	
}