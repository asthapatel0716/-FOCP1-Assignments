#include <stdio.h>

int main()
{
    int arr[100], size, element, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before insertion: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter element to insert at the FRONT: ");
    scanf("%d", &element);
    for (i = size; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    size++;
    printf("Array after inserting at front: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    int mid = size / 2;
    printf("\n\nEnter element to insert at the MIDDLE: ");
    scanf("%d", &element);

    for (i = size; i > mid; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[mid] = element;
    size++;
    printf("Array after inserting at middle: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter element to insert at the END: ");
    scanf("%d", &element);
    arr[size] = element;
    size++;
    printf("Array after inserting at end: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
