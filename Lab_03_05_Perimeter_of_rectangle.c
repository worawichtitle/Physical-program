#include <stdio.h>

int main(){
    double val_a, val_b;
    scanf("%lf %lf", &val_a, &val_b);
    printf("Perimeter of rectangle = %.4lf units", (val_a + val_b) * 2);

    return 0;
}
