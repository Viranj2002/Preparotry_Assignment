#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n ;    
    printf("Enter a number ");
    scanf("%d",&n);
    int a =0,b =1;
    if(n>=1){
        printf("%d ",a);
    }
    if (n>=2)
    {
        printf("%d ",b);
    }

    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
    }
    
    return 0;
}
