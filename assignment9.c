#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int n) {
    int arr[32];    
    if (n == 0) {
        printf("0");
    }
    int i = 0;
    while (n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }   
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
    printf("\n");
}

void octalToBinary(int n) {
    int arr[32];    
    if (n == 0) {
        printf("0");
    }
    int i = 0;
    while (n > 0) {
        arr[i] = n % 8;
        n = n / 8;
        i++;
    }   
    printf("Octal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
    printf("\n");
}

void hexadecimalToBinary(int n) {
    int arr[32];    
    if (n == 0) {
        printf("0");
    }
    int i = 0;
    while (n > 0) {
        arr[i] = n % 16;
        n = n / 16;
        i++;
    }   
    printf("Hexadecimal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    decimalToBinary(n);
    octalToBinary(n);
    hexadecimalToBinary(n);
    
    return 0;
}
