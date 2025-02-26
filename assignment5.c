#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char ch[20];    
    printf("Enter a input ");
    scanf("%s",ch);
    int length = strlen(ch); 
    for (int i = 0; i < length ; i++)
    {
        if (ch[i] >= '0' && ch[i]<= '9')
        {
            printf("%c is an digit\n",ch[i]);
        }
        else if (ch[i] >= 'A' && ch[i]<= 'Z')
        {
            printf("%c is an uppercase\n",ch[i]);
        }
        else if (ch[i] >= 'a' && ch[i]<= 'z')
        {
            printf("%c is an lowercase\n",ch[i]);
        }
        else {
            printf("%c is a character\n",ch[i]);
        } 
    }
    

    return 0;
}