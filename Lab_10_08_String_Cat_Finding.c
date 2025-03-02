#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main(){
    char mess [2000];
    int check = 0;
    scanf("%[^\n]s", mess);
    for (int i = 0; i < strlen(mess)-2; i++){
        if (mess[i] == 'c' || mess[i] == 'C'){
            if (mess[i+1] == 'a' || mess[i+1] == 'A'){
                if (mess[i+2] == 't' || mess[i+2] == 'T'){
                    if (check != 0){
                        printf(", %d", i);
                    } else {
                        printf("%d", i);
                        check++;
                    }
                }
            }
        }
    }
    return 0;
}