#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather w);

int main(){
    int num, i;
    struct Weather w;
    scanf("%d", &num);
    for(i = 0; i < num; i++){
        scanf(" %s %d %d %c", w.outlook, &w.temperature, &w.humidity, &w.wind);
        playing_decision(w);
    }

    return 0;
}

void playing_decision(struct Weather w){
    if (strcmp(w.outlook, "overcast") == 0){
        printf("yes");
    } else if (strcmp(w.outlook, "rain") == 0){
        if (w.wind == 'F'){
            printf("yes");
        } else {
            printf("no");
        }
    } else {
        if (w.humidity > 77.5){
            printf("no");
        } else {
            printf("yes");
        }
    }
    printf("\n");
}