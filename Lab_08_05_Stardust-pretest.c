#include <stdio.h>
#include <math.h>

void quickSort(double arr[], int low, int high);
int partition(double arr[], int low, int high);
void swap(double* a, double* b);
double stan_Deviation(double arr[], int len, double avg);

int main(){
    int len, i;
    scanf("%d", &len);
    double arr[len], num, avg = 0, median = 0, stan_dev = 0;
    for (i = 0; i < len; i++){
        scanf(" %lf", &num);
        arr[i] = num;
        avg += num;
    }
    avg /= len;
    printf("%.02lf", avg);

    quickSort(arr, 0, len - 1);

    median = arr[len / 2];
    if (len % 2 == 0){
        median = (arr[len / 2] + arr[(len / 2) - 1]) / 2;
    }
    printf("\n%.02lf", median);

    // stan_dev = stan_Deviation(arr, len, avg);
    for (i = 0; i < len; i++){
        stan_dev += pow(arr[i] - avg, 2);
    }
    stan_dev = sqrt(stan_dev / len);
    printf("\n%.02lf", stan_dev);

    return 0;
}

void quickSort(double arr[], int low, int high){
    if (low < high) {
        // pi is the partition return index of pivot
        int pi = partition(arr, low, high);

        // Recursion calls for smaller elements
        // and greater or equals elements
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(double arr[], int low, int high) {
  
    // Choose the pivot
    int pivot = arr[high];
  
    // Index of smaller element and indicates 
    // the right position of pivot found so far
    int i = low - 1;

    // Traverse arr[low..high] and move all smaller
    // elements on the left side. Elements from low to 
    // i are smaller after every iteration
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    // Move pivot after smaller elements and
    // return its position
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

double stan_Deviation(double arr[], int len, double avg){
    int i;
    double stan_dev;
    for (i = 0; i < len; i++){
        stan_dev += pow(arr[i] - avg, 2);
    }
    stan_dev = sqrt(stan_dev / len);

    return stan_dev;
}