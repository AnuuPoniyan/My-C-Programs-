#include <stdio.h>

int main(){
    char a[50];
    int b;

    printf("Enter Your Name: ");
    scanf("%20s", &a);
    
    printf("Enter Your Age: ");
    scanf("%d", &b);

    printf("Hi, I am %s and my age is %d", a, b);
    return 0;
}