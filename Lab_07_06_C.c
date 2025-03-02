#include <stdio.h>
#include <math.h>

double find_C(double x, double y);

int main(){
    double x, y, c;
    scanf("%lf %lf", &x, &y);
    c = find_C(x, y);
    printf("sqrt(%.lf^2+%.lf^2)=%.2lf", x, y, c);

    return 0;
}

double find_C(double x, double y){
    double c = sqrt(pow(x, 2) + pow(y, 2));
    return c;
}