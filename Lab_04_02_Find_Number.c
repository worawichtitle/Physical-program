#include <stdio.h>
int main() {
    float ingret1, ingret2, ingret3, mid;
    scanf("%f %f %f", &ingret1, &ingret2, &ingret3);
    if ((ingret1 <= ingret2 && ingret1 >= ingret3) ||\
    (ingret1 >= ingret2 && ingret1 <= ingret3)){
        printf("%.2f", ingret1);
    } else if ((ingret2 <= ingret1 && ingret2 >= ingret3) ||\
    (ingret2 >= ingret1 && ingret2 <= ingret3)) {
        printf("%.2f", ingret2);
    } else {
        printf("%.2f", ingret3);
    }

    return 0;
}