#include <stdio.h>
int main(){
    int num, answer;
    do{
        scanf("%d", &num);
        answer += num;
    } while(num != -9);
    printf("%d", (answer + 9));

    return 0;
}