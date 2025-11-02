#include <stdio.h>
int main()
{
    int arr[] = {1, 3, 4, 3, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nPeak elements: ");
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
