#include <stdio.h>

int main(){
    int num = 0, startnum;
    scanf("%d", &startnum);
    if (startnum >= 0){
        while (startnum >= num){
            printf("%d ",  startnum--);
        }
    } else {
        while (startnum <= num){
            printf("%d ",  startnum++);
        }
    }

    return 0;
}