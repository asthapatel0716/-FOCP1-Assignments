#include <stdio.h>
int main() 
{
    int num1, num2, hcf,min;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    min = (num1 < num2) ? num1 : num2;
    for (int i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    return 0;
}
