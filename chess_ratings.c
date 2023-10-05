#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int diff = Y - X;
        if (diff <= 0) {
            printf("0\n");
        } 
        else {
            int games = (diff + 7) / 8; 
            printf("%d\n", games); 
        }
    }
    return 0;
}
