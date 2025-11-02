#include <stdio.h>
int isPrime(int num) 
{
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i <=num/2; i++) 
    {
        if (num % i == 0)
            return 0; 
    }
    return 1;
}

int main()
 {
    int n,i,count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    printf("\nTotal prime numbers in the array: %d\n", count);
    return 0;
}
