#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

double height(int theta, int u);

int main(){
    int theta, u;
    scanf("%d %d", &theta, &u);
    double h = height(theta, u);
    printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4lf", theta, u, h);

    return 0;
}

double height(int theta, int u){
    double g = 9.81, radius, h;
    radius = (theta * PI) / 180;
    h = (pow(u, 2) * pow(sin(radius), 2)) / (2 * g);

    return  h;
}