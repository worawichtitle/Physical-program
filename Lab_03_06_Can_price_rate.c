#include <stdio.h>
#include <math.h>

int main(){
    float price, diameter, height;
    scanf("%f %f %f", &price, &diameter, &height);
    float radius = diameter / 2;
    float volume = height * M_PI * (radius * radius);
    float b_per_ml = price / volume;
    printf("Volume : %.2fml\nBaht/ml : %.4f", volume, b_per_ml);

    return 0;
}
