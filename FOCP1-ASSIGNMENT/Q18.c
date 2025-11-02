#include <stdio.h>

int main()
{
    int arr[100], size, i, j, no = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements: ");
    for (i = 0; i < size; i++)
    {
        int Dup = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                Dup = 1;
                break;
            }
        }
        if (!Dup)
        {
            for (j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    printf("%d ", arr[i]);
                    no = 1;
                    break;
                }
            }
        }
    }

    if (!no)
    {
        printf("-1");
    }

    return 0;
}
