#include <stdio.h>

int main () {
    int X, Y, mix;
    printf("Please enter the value of X : ");
    scanf("%d", &X);
    printf("Please enter the value of Y : ");
    scanf("%d", &Y);

    mix = (X>Y)? X:Y;

    if (mix>Y) {
        printf("X has value more than Y\n");
    } else if (mix>X) {
        printf("Y has value more than X\n");
    } else {
        printf("X and Y is equal\n");
    }

    return 0;
}