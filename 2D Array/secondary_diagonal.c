#include <stdio.h>
#include <stdbool.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    bool flag = true;

    if (r == c) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i + j == r - 1) {
                    // it's on the secondary diagonal
                } else {
                    // outside the diagonal
                    if (a[i][j] != 0) {
                        flag = false;
                        break; // one non-zero is enough
                    }
                }
            }
        }

        if (flag == true)
            printf("It's a secondary diagonal matrix.\n");
        else
            printf("It's not a secondary diagonal matrix.\n");
    } else {
        printf("It's not a square matrix, so not diagonal.\n");
    }

    return 0;
}
