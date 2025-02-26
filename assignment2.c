#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n ;
    
    printf("Enter a number ");
    scanf("%d",&n);
    int num = n;
    if (num==0)
    {
        printf("Factorial = 1");
    }
    else{
        while (n>1)
        {
            num *= (n-1);
            n--;
        }
        printf("Factorial = %d",num);
    }
    return 0;
}
