#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[201];
    char upalpha[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    char lowalpha[] = "abxypqrmncedkljoshtufvzgwi";
    char *findalp;
    scanf("%[^\n]s", text);
    int now, index, len = strlen(text);
    for(now = 0; now < len; now++){
        if(text[now] == ' '){
            printf(" ");
        } else if(islower(text[now])){
            findalp = strchr(lowalpha, text[now]);
            index = (((int)(findalp - lowalpha)) + 26 - 5) % 26;
            printf("%c", lowalpha[index]);
        } else {
            findalp = strchr(upalpha, text[now]);
            index = (((int)(findalp - upalpha)) + 26 - 5) % 26;
            printf("%c", upalpha[index]);
        }
    }
}