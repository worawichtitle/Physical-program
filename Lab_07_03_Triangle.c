#include <stdio.h>
#include "math.h"

double perimeter(double a, double b);
double area(double a, double b);

int main(){
    double a, b, peri, arae;
    scanf("%lf %lf", &a, &b);
    peri = perimeter(a, b);
    arae = area(a, b);
    printf("Perimeter: %.2lf\nArea: %.2lf", peri, arae);

    return 0;
}

double perimeter(double a, double b){
    double c = sqrt((a * a) + (b * b));
    return a + b + c;
}

double area(double a, double b){
    double arae = ((a * b) / 2);
    return arae;
}
