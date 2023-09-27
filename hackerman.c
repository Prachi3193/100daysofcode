#include <stdio.h>

int main(void) {
    int t, a, b, s;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &a, &b);
        s = a + b;
        int isPrime = 1;  // Assume it's prime initially

        if (s <= 1) {
            isPrime = 0;
        } else if (s <= 3) {
            isPrime = 1;
        } else if (s % 2 == 0 || s % 3 == 0) {
            isPrime = 0;
        } else {
            for (int i = 5; i * i <= s; i += 6) {
                if (s % i == 0 || s % (i + 2) == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
    return 0;
}
