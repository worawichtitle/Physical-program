#include <stdio.h>

int main(){
    unsigned int shipid;
    scanf("%u", &shipid);
    if (shipid < 1000){
        int checkid = shipid % 10;
        switch (checkid){
            case 0:
                printf("Command-class starship");
                break;
            case 5:
                printf("Exploration-class starship");
                break;
            default:
                printf("General-class starship");
                break;
        }
    } else {
        int firstid = shipid;
        while(firstid >= 10){
            firstid = firstid / 10;
        }
        if(firstid % 2){
            printf("Reserve ");
        } else {
            printf("Active ");
        }
        shipid = shipid % 100;
        if (shipid == 75 || shipid == 50){
            printf("Starfleet Flagship");
        } else {
            printf("Standard-class starship");
        }
    }

    return 0;
}