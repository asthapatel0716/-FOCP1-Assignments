#include <stdio.h>
int main()
{
    int scores[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int even_array[10], odd_array[10];
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < 10; i++)
    {
        if (scores[i] % 2 == 0)
            even_array[even_count++] = scores[i];
        else
            odd_array[odd_count++] = scores[i];
    }

    printf("The even array is: ");
    for (int i = 0; i < even_count; i++)
        printf("%d ", even_array[i]);

    printf("\nThe odd array is: ");
    for (int i = 0; i < odd_count; i++)
        printf("%d ", odd_array[i]);

    return 0;
}
