#include <stdio.h>

int main(){
    float price, sale, shirt;
    scanf("%f %f %f", &price, &sale, &shirt);
    float cost = price * shirt * ((100 - sale)/100);
    printf("%.2f", cost);

    return 0;
}
