#include <stdio.h>
int add(int a, int b)
 {
    int carry;
    while (b != 0) {
        carry = a & b; 
        a = a ^ b;       
        b = carry << 1; 
    }
    return a;
}
int subtract(int a, int b) {
    return add(a, add(~b, 1));
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Result of %d - %d = %d\n", num1, num2, subtract(num1, num2));
    return 0;
}
