#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* makeCapitalize(char text[]);
void mySelectionSort(char array[][50], int num);

int main(){
    char fullname[50];
    int i, j, k, mark, num;
    scanf("%d", &num);
    char allname[num][50];
    for(j = 0; j < num; j++){
        scanf(" %[^\n]s", fullname);
        // add str fullname to allname array
        strcpy(allname[j], makeCapitalize(fullname));
    }
    // selection sort
    mySelectionSort(allname, num);
    // print sorted allname
    for (i = 0; i < num; i++){
        printf("%s\n", allname[i]);
    }

    return 0;
}

// make text input Capitalize
char* makeCapitalize(char text[]){
    for (int i = 0; text[i] != '\0'; i++) {
        if (i != 0 && text[i] != ' ') {
            text[i] = tolower(text[i]);
        } else if (text[i] == ' ') {
            ++i;
            text[i] = toupper(text[i]);
        }
        else {
            text[i] = toupper(text[i]);
        }
    }
    return text;
}

void mySelectionSort(char array[][50], int num){
    for (int i = 0; i < num; i++) {
        int mark = i;
        for (int j = i + 1; j < num; j++) {
            if (strcmp(array[j], array[mark]) < 0) {
                mark = j;
            }
        }
        char lowest[50];
        strcpy(lowest, array[mark]);
        strcpy(array[mark], array[i]);
        strcpy(array[i], lowest);
    }
}