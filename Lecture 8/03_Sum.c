// Sum of Two Numbers
#include <stdio.h>

int main(){
    float number1, number2;
    
    printf("Enter The number1: ");
    scanf("%f", &number1);

    printf("Enter The number2: ");
    scanf("%f", &number2);

    float sum = number1 + number2;
    printf("The sum of the numbers are: %f", sum);

    return 0;

}
