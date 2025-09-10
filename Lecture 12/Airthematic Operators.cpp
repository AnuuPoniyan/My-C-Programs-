#include<stdio.h>
int main(){
	int number1;
	printf("Enter the 1st number: ");
	scanf("%d", &number1);
	
	printf("Enter the 2nd number: ");
	int number2;
	scanf("%d", &number2);
	
	printf("The sum of the numbers is:%d\n", (number1 + number2));
	printf("The subtraction of the numbers is:%d\n", (number1 - number2));
	printf("The multiplication of the numbers is:%d\n", (number1 * number2));
	printf("The divison of the numbers is:%d", (number1 / number2));
	
	return 0;
}

/*
ALGORITHM
1. Start.
2. Declare two variables.
3. Take input from the users.
4. Add them.
5. Print the result.
6. End
*/


/*
PSEUDO CODE
1. Start
2. Scan(a)
3. Scan(b)
4. Add Them a+b
5. Printf(The Result)
6. End
*/