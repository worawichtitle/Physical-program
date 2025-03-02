#include <stdio.h>

int main() {
    float val_a, val_b, val_c;
    scanf("%f %f %f", &val_a, &val_b, &val_c);
    if (val_a + val_b > val_c && val_a + val_c > val_b && val_b + val_c > val_a ) {
        printf("Triangle is valid.");
    } else {
        printf("Triangle is not valid.");
    }

    return 0;
}