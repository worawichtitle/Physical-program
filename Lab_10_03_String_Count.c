#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main(){
    char want;
    char mess[150];
    int count = 0;
    scanf("%c", &want);
    scanf(" %[^\n]s", mess);
    for (int i = 0; i < strlen(mess); i++){
        if (tolower(mess[i]) == tolower(want)){
            count += 1;
        }
    }
    printf("%d", count);
}