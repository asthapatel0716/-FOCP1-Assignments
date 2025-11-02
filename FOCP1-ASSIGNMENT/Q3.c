#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter number 1: ");
    scanf("%d", &x);
    printf("Enter number 2: ");
    scanf("%d", &y);
    printf("The subtraction of the numbers would be %d", x + (~y + 1));
    return 0;
}
