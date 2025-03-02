#include <stdio.h>
#include <ctype.h>

int main(){
    int len = 0, allinput, i;
    scanf("%d", &allinput);
    // char all[allinput];
    char key[26] = {0};
    int value[26] = {0};
    char input;
    for(i = 0; i < allinput; i++){
        scanf(" %c", &input);
        input = tolower(input);
        // all[i] = input;
        for(int j = 0; j < 26; j++){
            if (key[j] == 0){
                key[j] = input;
                value[j] = 1;
                len++;
                break;
            } else if(key[j] == input){
                value[j]++;
                break;
            }
        }
    }
    // for(i = 0; i < allinput; i++){
    //     printf("%c ", all[i]);
    // }
    // printf("len = %d\n", len);
    for(i = 0; i < len; i++){
        printf("%c: %d\n", key[i], value[i]);
    }

    return 0;
}