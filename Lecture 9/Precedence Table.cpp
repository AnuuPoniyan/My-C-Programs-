// Gives a overview about the precedence of operators in C.

#include <stdio.h>
#include <stdint.h>  // For uintptr_t

int main() {
    int a = 5, b = 10, c = 3;
    int *ptr = &b;

    // 1. Postfix increment
    a++;
    b++;

    // 2. Prefix increment
    ++a;
    ++b;

    // 3. sizeof operator
    int size = sizeof(int);

    // 4. Bitwise NOT and Logical NOT
    int not1 = ~a;
    int not2 = !b;

    // 5. Unary plus, minus, address-of, pointer dereference
    int val = +a - -b;
    uintptr_t addr = (uintptr_t)&c;  // Correct pointer to integer cast
    int deref = *ptr;

    // 6. Type cast
    float f = (float)a / b;

    // 7. Multiplication, division, modulo
    int mult = a * b;
    int div = b / a;
    int mod = b % a;

    // 8. Addition, subtraction
    int add = a + c;
    int sub = b - a;

    // 9. Bitwise shift
    int shl = a << 1;
    int shr = b >> 1;

    // 10. Comparison
    int cmp1 = a < b;
    int cmp2 = a <= b;
    int cmp3 = a > b;

    // 11. Equality
    int eq = (a == b);
    int neq = (a != b);

    // 12. Bitwise AND, XOR, OR
    int bit_and = a & b;
    int bit_xor = a ^ b;
    int bit_or = a | b;

    // 13. Logical AND, OR
    int log_and = a && b;
    int log_or = a || b;

    // 14. Conditional operator
    int cond = (a > b) ? a : b;

    // 15. Assignment operators
    int assign = 5;
    assign += 3;
    assign -= 1;
    assign *= 2;
    assign /= 2;
    assign %= 2;
    assign &= 1;
    assign ^= 1;
    assign |= 1;
    assign <<= 1;
    assign >>= 1;

    // 16. Comma operator
    int comma = (a = 1, b = 2, a + b);

    // Print all results
    printf("Postfix increments: a=%d, b=%d\n", a, b);
    printf("Sizeof int: %d\n", size);
    printf("Bitwise NOT of a: %d\n", not1);
    printf("Logical NOT of b: %d\n", not2);
    printf("Unary plus and minus val: %d\n", val);
    printf("Address of c: %lu\n", (unsigned long)addr);
    printf("Dereferenced pointer ptr: %d\n", deref);
    printf("Type cast float f: %.2f\n", f);
    printf("Multiplication: %d\n", mult);
    printf("Division: %d\n", div);
    printf("Modulo: %d\n", mod);
    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Bitwise shift left: %d\n", shl);
    printf("Bitwise shift right: %d\n", shr);
    printf("Comparison < : %d\n", cmp1);
    printf("Comparison <= : %d\n", cmp2);
    printf("Comparison > : %d\n", cmp3);
    printf("Equality == : %d\n", eq);
    printf("Not Equal != : %d\n", neq);
    printf("Bitwise AND: %d\n", bit_and);
    printf("Bitwise XOR: %d\n", bit_xor);
    printf("Bitwise OR: %d\n", bit_or);
    printf("Logical AND: %d\n", log_and);
    printf("Logical OR: %d\n", log_or);
    printf("Conditional operator result: %d\n", cond);
    printf("Assignment result: %d\n", assign);
    printf("Comma operator result: %d\n", comma);

    return 0;
}

