#include <stdio.h>

void printPattern() {
    
    for (int i = 0; i < 11; i++) {
        printf("#");
    }
    printf("\n");

    
    for (int i = 0; i < 3; i++) {
        printf("#");
        for (int j = 0; j < 4; j++) {
            printf("*");
        }
        printf("#\n");
    }

    
    for (int i = 0; i < 11; i++) {
        printf("#");
    }
    printf("\n");
}

int main() {
    printPattern();
    return 0;
}

