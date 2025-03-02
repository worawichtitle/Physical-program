#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main(){
    char mess[450];
    int alpha = 0;
    int word = 0;
    int line = 0;
    while (1){
        scanf(" %[^\n]s", mess);
        if (mess[0] == '.'){
            break;
        }
        for (int i = 0; i < strlen(mess); i++){
            if (isspace(mess[i])){
                word +=1;
            }
            if (isalpha(mess[i])){
                alpha += 1;
            }
        }
        word += 1;
        line += 1;
        strcpy(mess, "");
    }
    printf("Char = %d, word = %d, line = %d", alpha, word, line);
    return 0;
}