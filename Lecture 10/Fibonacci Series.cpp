// Print Fibonacci Series to the extent you want.
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Ask for number of terms
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");

    return 0;
}

