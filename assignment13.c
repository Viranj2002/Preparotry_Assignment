
#include <stdio.h>
#include <string.h>

int main() {
    char *str[]= {"hi","hello","hi","bye","bye"};
    int n =sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (strcmp(str[i],str[j])==0)
            {
                printf("%s ",str[i]);
                break;
            }
            
        }
        
    }
    
    
    return 0;
}
