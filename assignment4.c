#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,m,b,v,c ;    
    printf("Enter a marks in all 5 subjects ");
    scanf("%d %d %d %d %d",&n, &m, &b, &v, &c);
    
    int marks = (n + m + b + v + c) /5;
    
    if (marks >= 90)
    {
        printf("grade = Ex");
    }
    else if (marks >= 80)
    {
        printf("grade = A");
    }
    else if (marks >= 70)
    {
        printf("grade = B");
    }
    else if (marks >= 60)
    {
        printf("grade = C");
    }
    else if (marks < 60)
    {
        printf("grade = F");
    }
    else {
        printf("you entered invalid marks");
    } 
    return 0;
}
