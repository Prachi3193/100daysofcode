#include <stdio.h>

int main() {
    int X, Y; // Total movie time and time at double speed
    scanf("%d %d", &X, &Y);

    // Calculate the time spent watching the first Y minutes at double speed
    int first_part_time = Y / 2;

    // Calculate the time spent watching the remaining (X - Y) minutes at normal speed
    int second_part_time = X - Y;

    // Calculate the total time spent
    int total_time = first_part_time + second_part_time;

    printf("%d\n", total_time);

    return 0;
}
