#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main(){
    char mess[200];
    scanf("%[^\n]s", mess);
    printf("%c.", toupper(mess[0]));
    for (int i = 0; i < strlen(mess); i++){
        if (isspace(mess[i])){
            printf("%c.", toupper(mess[i+1]));
        }
    }
}