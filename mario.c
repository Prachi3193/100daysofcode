#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        int size = 1;

        for (int i = 0; i < X; i++) {
            if (size == 1)
                size = 2;
            else if (size == 2)
                size = 3;
            else
                size = 1;
        }

        if (size == 1)
            printf("NORMAL\n");
        else if (size == 2)
            printf("HUGE\n");
        else
            printf("SMALL\n");
    }

    return 0;
}
