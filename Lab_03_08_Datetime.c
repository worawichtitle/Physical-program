#include <stdio.h>

int main(){
    int time_sec, sec, minu, hour, day;
    scanf("%d", &time_sec);
    minu = time_sec / 60;
    sec = time_sec % 60;
    hour = minu / 60;
    minu = minu % 60;
    day = hour / 24;
    hour = hour % 24;
    printf("%d s = %d d %d h %d m %d s", time_sec, day, hour, minu, sec);

    return 0;
}
