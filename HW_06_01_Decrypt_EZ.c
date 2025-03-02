#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char alpha[26] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    char text[201];
    scanf("%[^\n]", text);
    for (int i = 0; i < strlen(text); i++){
        int index = 0;
        if (text[i] == ' '){
            printf(" ");
            continue;
        }
        int alpislow = islower(text[i]);
        for (int j = 0; j < 26; j++){
            if (alpislow){
                if (alpha[j] + 32 == text[i]){
                    index = j;
                    break;
                }
            } else {
                if (alpha[j] == text[i]){
                    index = j;
                    break;
                }
            }
        }
        index = (index + 5) % 26;
        if (alpislow){
            printf("%c", tolower(alpha[index]));
        } else {
            printf("%c", alpha[index]);
        }
    }

    return (0);
}