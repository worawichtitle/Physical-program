#include <stdio.h>

int main(){
    double val_a, val_b;
    scanf("%lf,%lf", &val_a, &val_b);
    printf("The sum of the given numbers : %lf\n", val_a + val_b);
    printf("The difference of the given numbers : %lf\n", val_a - val_b);
    printf("The product of the given numbers : %lf\n", val_a * val_b);
    printf("The quotient of the given numbers : %lf", val_a / val_b);

    return 0;
}
