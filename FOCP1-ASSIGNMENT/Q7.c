#include <stdio.h>
int main()
 {
    int i,j,rows=5,space;
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j % 2 == 0 ? 1 : 0);
        }
        for (space = 1; space <= 2 * (rows - i); space++) 
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j % 2 == 0 ? 1 : 0);
        }
        printf("\n");
    }
    return 0;
}
