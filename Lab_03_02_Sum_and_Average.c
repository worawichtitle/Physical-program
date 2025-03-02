#include <stdio.h>
int main(){
    float ingred1, ingred2, ingred3, ingred4;
    scanf("%f %f %f %f", &ingred1, &ingred2, &ingred3, &ingred4);
    float sum = ingred1 + ingred2 + ingred3 + ingred4;
    float avg = (ingred1 + ingred2 + ingred3 + ingred4) / 4;
    printf("Summation is %.2f\nAverage is %.3f", sum, avg);

    return 0;
}
