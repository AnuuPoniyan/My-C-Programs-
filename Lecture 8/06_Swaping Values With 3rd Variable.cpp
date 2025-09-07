#include<stdio.h>
int main(){
	int a, b, c;
	
	// Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
	
	// Swap using a temporary variable
	c = a;
	a = b;
	b = c;
	
	printf("After swapping: a = %d, b = %d\n", a, b);
	
	return 0;
	
}