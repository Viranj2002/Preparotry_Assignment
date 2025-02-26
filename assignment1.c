
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Enter the numbers as command line arguments.\n");
        return 1;
    }

    int max = atoi(argv[1]);  

    for (int i = 2; i < argc; i++) {
        if (atoi(argv[i]) > max) {
            max = atoi(argv[i]);  
        }
    }

    printf("The maximum number is: %d\n", max);
    
    return 0;
}
