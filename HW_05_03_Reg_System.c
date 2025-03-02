#include <stdio.h>

int main(){
    int age, num, avg_age = 0;
    int h20_160 = 0, l20_180 = 0, h30 = 0, l40 = 0;
    float height, weight, avg_h = 0, avg_w = 0;
    for(num = 1; num <= 50; num++){
        scanf("%d %f %f", &age, &height, &weight);
        if (age >= 20 && height >= 160){
            h20_160++;
        }
        if(age < 20 && (height <= 180 || weight >= 60)){
            l20_180++;
        }
        if(age >= 30 && (80 >= weight && weight >= 40)){
            h30++;
        }
        if(age < 40 && (weight < 85 || height <= 200)){
            l40++;
        }
        avg_age += age;
        avg_h += height;
        avg_w += weight;
    }
    printf("Age >= 20 and Height >= 160: %d\n\
Age < 20 and Height <= 180 or Weight >= 60: %d\n\
Age >= 30 and Weight >= 40 and Weight <= 80: %d\n\
Age < 40 and Weight < 85 or Height <= 200: %d\n\
Average Age: %d\n\
Average Height: %.2f\n\
Average Weight: %.2f", h20_160, l20_180, h30, l40,\
avg_age / 50, avg_h / 50, avg_w / 50);

    return 0;
}