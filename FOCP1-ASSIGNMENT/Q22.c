#include <stdio.h>
#include <string.h>

int main() {
    char word[21];
    scanf("%s", word);

    int zCount = 0, oCount = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'z') {
            zCount++;
        } else if (word[i] == 'o') {
            oCount++;
        }
    }

    if (oCount == 2 * zCount) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
