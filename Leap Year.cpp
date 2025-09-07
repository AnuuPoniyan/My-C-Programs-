#include <stdio.h>

int main() {
    int Year;
    printf("Enter The Year: ");
    scanf("%d", &Year);

    // Leap year condition
    if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) {
        printf("The Year is a Leap Year.\n");
    } else {
        printf("The Year is not a Leap Year.\n");
    }

    return 0;
}


/*
Algorithm to check if a year is a leap year:

1. Start
2. Input the year (Year)
3. If Year is divisible by 400
       then
           The Year is a Leap Year
4. Else if Year is divisible by 4 AND not divisible by 100
       then
           The Year is a Leap Year
5. Else
       The Year is not a Leap Year
6. End
*/
