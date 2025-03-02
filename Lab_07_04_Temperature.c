#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main(){
    double temp, converted;
    char varia;
    scanf("%lf %c", &temp, &varia);
    switch (varia){
        case 'c':
        case 'C':
            converted = celsiusToFahrenheit(temp);
            printFarenheit(converted);
            break;
        case 'f':
        case 'F':
            converted = fahrenheitToCelcius(temp);
            printCelcius(converted);
            break;
    }
    return 0;
}

double celsiusToFahrenheit(double celcius){
    double fahrenheit = 32 + celcius * (180.0 / 100.0);
    return fahrenheit;
}

double fahrenheitToCelcius(double fahrenheit){
    double celcius = (100.0 / 180.0) * (fahrenheit - 32);
    return celcius;
}

void printFarenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}