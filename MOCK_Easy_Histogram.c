#include <stdio.h>
#include <ctype.h>

int main(){
    char text[101];
    char atoz[52] = {0};
    int value[52] = {0};
    int i, j, asc = 97;
    scanf("%[^\n]s", &text);
    for (i = 0; i < 52; i++){
        char alpha = asc++;
        atoz[i++] = alpha;
        atoz[i] = toupper(alpha);
    }
    for (i = 0; text[i] != '\0'; i++){
        for(j = 0; j < 52; j++){
            if (text[i] == atoz[j]){
                value[j]++;
                break;
            }
        }
    }

    for (i = 0; i < 52; i++){
        if (value[i] > 0)
            printf("%c = %d\n", atoz[i], value[i]);
    }

    return 0;
}