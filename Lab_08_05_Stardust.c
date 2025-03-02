#include <stdio.h>
#include <math.h>

void selectionSort(double arr[], int len);
double stan_Deviation(double arr[], int len, double avg);

int main(){
    int len, i;
    double num, avg = 0, median, stan_dev = 0;
    scanf("%d", &len);
    double arr[len];
    for (i = 0; i < len; i++){
        scanf(" %lf", &num);
        avg += num;
        arr[i] = num;
    }
    avg /= len;
    printf("%.2lf\n", avg);

    selectionSort(arr, len);
    for (i = 0; i < len; i++){
        int least = i;
        for (int j = i; j < len; j++){
            if (arr[j] < arr[least]){
                least = j;
            }
        }
        double temp = arr[least];
        arr[least] = arr[i];
        arr[i] = temp;
    }
    if (len % 2 == 0){
        median = (arr[len/2] + arr[(len/2)-1]) / 2;
    } else {
        median = arr[len/2];
    }
    printf("%.2lf\n", median);

    // stan_dev = stan_Deviation(arr, len, avg);
    for(i = 0; i < len; i++){
        stan_dev += pow((arr[i] - avg), 2);
    }
    stan_dev = sqrt(stan_dev / len);
    printf("%.2lf", stan_dev);

    return 0;
}

void selectionSort(double arr[], int len){
    int least, i, j;
    for (i = 0; i < len; i++){
        least = i;
        for (j = i; j < len; j++){
            if (arr[j] < arr[least]){
                least = j;
            }
        }
        double temp = arr[least];
        arr[least] = arr[i];
        arr[i] = temp;
    }
}

double stan_Deviation(double arr[], int len, double avg){
    double stan_dev = 0;
    for(int i = 0; i < len; i++){
        stan_dev += pow((arr[i] - avg), 2);
    }
    stan_dev = sqrt(stan_dev / len);

    return stan_dev;
}