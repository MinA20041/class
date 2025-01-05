#include <stdio.h>
int main(){ 
    int i = 0;
    if (i<6){ 
        printf("##########\n");
    }
    do {
        printf("#********#\n");
        i++;
    }
    while (i<3);
    printf("##########\n");
    return (0);
}