#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char allname[20][50];
    char fullname[50];
    char lowest[50];
    int i, j, k, mark;
    for(j = 0; j < 20; j++){
        scanf(" %[^\n]s", fullname);
        // set fullname to be capitalize
        for (i = 0; fullname[i] != '\0'; i++) {
            if (i != 0 && fullname[i] != ' ') {
                fullname[i] = tolower(fullname[i]);
            } else if (fullname[i] == ' ') {
                ++i;
                fullname[i] = toupper(fullname[i]);
            }
            else {
                fullname[i] = toupper(fullname[i]);
            }
        }
        // add str fullname to allname array
        strcpy(allname[j], fullname);
    }
    // selection sort
    for (i = 0; i < 20; i++){
        // printf("%s\n", allname[i]);
        strcpy(lowest, allname[i]);
        mark = i;
        for (k = i + 1; k < 20; k++){
            for (j = 0; allname[k][j] != '\0'; j++){
                // printf("%d ", k);
                if(lowest[j] < allname[k][j]){
                    // printf("\nnot lower\n");
                    break;
                } else if (lowest[j] > allname[k][j]) {
                    // printf("\n%s : is lower\n", allname[k]);
                    strcpy(lowest, allname[k]);
                    mark = k;
                    continue;
                }
            }
        }
        strcpy(allname[mark], allname[i]);
        strcpy(allname[i], lowest);
    }
    // print sorted allname
    for (i = 0; i < 20; i++){
        printf("%s\n", allname[i]);
    }

    return 0;
}