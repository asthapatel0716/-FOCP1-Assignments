#include <stdio.h>
int main()
{
    int i = 0,n=0;
    int arr[15] = {1, 12, 14, 54, 23, 22, 27, 86, 67, 96, 99, 9, 13, 76, 51};
    for (int i = 0; i < 15; i++)
    {
        n++;
        if(arr[i] == 99)
        {
            printf("99 is at %d position in the array", n);
        }
    }
    return 0;
}
