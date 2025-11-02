#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
 int temp = arr[4]; 
    for(i = 4; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp; 
    printf("The new array is: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
