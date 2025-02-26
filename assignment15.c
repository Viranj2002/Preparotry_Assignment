#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    //char *str = "hello my name is VIRANJ";
    char s[100] ;
    printf("Enter a string ");
    fgets(s, sizeof(s),stdin);
    int length = strlen(s);
    int count[26] = {0};
    
    char ch ;
    for (int i = 0; i < length; i++)
    {
        ch = tolower(s[i]);
        if(ch>=97 && ch<=122){
            count[ch-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        printf("%c = %d\n",'a' + i ,count[i]);
    }
}
