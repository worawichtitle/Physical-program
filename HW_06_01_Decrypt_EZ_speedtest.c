#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(void)
{
    char key[26] = {'A', 'I', 'W', 'G', 'Z', 'V', 'F', 'U', 'T', 'H', 'S', 'O', 'J', 'L', 'K',
                    'D', 'E', 'C', 'N', 'M', 'R', 'Q', 'P', 'Y', 'X', 'B'};
 
    char text[200];
 
    scanf("%[^\n]", &text);
 
    for(int i = 0; i < strlen(text); i++)
    {
        int current = 0;
 
        if(text[i] == ' ')
        {
            printf(" ");
            continue;
        }
 
        //find index
        for(int j = 0; j < 26; j++)
        {
            if(islower(text[i]))
            {
                if(key[j]+32 == text[i])
                {
                    current = j;
                    break;
                }
            }
            else
            {
                if(key[j] == text[i])
                {
                    current = j;
                    break;
                }
            }
        }
        if (current-5 < 0)
        {
            current = 25-((5-(current+1)));
        }
        else
        {
            current -= 5;
        }
 
        if(text[i] >= 'a' && text[i] <= 'z')
        {
            char alpha = tolower(key[current]);
            printf("%c", alpha);
        }
        else
        {
            printf("%c", key[current]);
        }
    }
    return (0);
}