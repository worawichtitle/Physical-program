#include <stdio.h>

double getValue(void);
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main(){
    int n;
    scanf ("%d", &n);

    double array[n];
    for (int i = 0; i < n; i++){
        array[i] = getValue();
    }

    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);
    printf("%d Values\nMin: %.3lf\nMax: %.3lf\n\
Avg: %.3lf", n, min, max, avg);

    return 0;
}

double getValue(void){
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size){
    double min = array[0];
    for (int i = 1; i < size; i++){
        if (min > array[i]){
            min = array[i];
        }
    }
    return min;
}

double findMax(double array[], int size){
    double max = array[0];
    for (int i = 1; i < size; i++){
        if (max < array[i]){
            max = array[i];
        }
    }
    return max;
}

double findAvg(double array[], int size){
    double avg = 0;
    for (int i = 0; i < size; i++){
        avg += array[i];
    }
    avg /= size;
    return avg;
}