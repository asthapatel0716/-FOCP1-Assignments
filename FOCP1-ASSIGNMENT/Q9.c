#include <stdio.h>
int main() 
{
    int n, i, position = -1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
     }
    for (i = 0; i < n; i++) 
    {
        if (arr[i] == 99) {
            position = i;
            break; 
        }
    }
    if (position != -1)
        printf("The first occurrence of score 99 is at position %d.\n", position + 1);
    else
        printf("Score 99 not found in the array.\n");
    return 0;
}
