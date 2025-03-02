#include <stdio.h>

int main(){
    float height, weight;
    scanf("%f %f", &height, &weight);
    float height_m = height / 100;
    float bmi = weight / (height_m * height_m);
    printf("%f", bmi);

    return 0;
}
