#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, (num * i));
    }
    return 0;
}
