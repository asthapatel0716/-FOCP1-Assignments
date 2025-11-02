#include <stdio.h>

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int choice, i;

    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nChoose deletion:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // Delete from front
        for (i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
    else if (choice == 2)
    {
        // Delete from middle
        int mid = size / 2;
        for (i = mid; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
    else if (choice == 3)
    {
        // Delete from end
        size--;
    }
    else
    {
        printf("Invalid choice.\n");
        return 0;
    }

    printf("\nArray after deletion: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
