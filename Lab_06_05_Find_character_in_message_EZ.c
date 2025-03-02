#include <stdio.h>
#include <ctype.h>

int main(){
    char text[301];
    int f_len = 0, i = 0, found[301] = {0}; 
    char find;
    scanf("%[^\n]s", &text);
    scanf(" %c", &find);
    while(text[i] != '\0'){
        if(tolower(text[i]) == tolower(find)){
            found[f_len] = i + 1;
            f_len++;
        }
        i++;
    }
    if (f_len){
        printf("There is/are %d \"%c\" in the above sentences.", f_len, find);
        printf("\nPosition: %d", found[0]);
        for(int j = 1; j < f_len; j++){
            printf(", %d", found[j]);
        }
    } else {
        printf("Not found.");
    }

    return 0;
}