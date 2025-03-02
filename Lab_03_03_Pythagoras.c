#include <stdio.h>
#include <math.h>

int main(){
    float val_a, val_b;
    scanf("%f %f", &val_a, &val_b);
    float val_c = sqrt(val_a * val_a + val_b * val_b);
    printf("%.2f", val_c);

    return 0;
}
