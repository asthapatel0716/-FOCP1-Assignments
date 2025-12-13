#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int green, purple;
        scanf("%d %d", &green, &purple);

        int N;
        scanf("%d", &N);

        int p1 = 0, p2 = 0;

        for (int i = 0; i < N; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            p1 += a;
            p2 += b;
        }

        int cost1 = p1 * green + p2 * purple;
        int cost2 = p1 * purple + p2 * green;

        if (cost1 < cost2)
            printf("%d\n", cost1);
        else
            printf("%d\n", cost2);
    }

    return 0;
}
