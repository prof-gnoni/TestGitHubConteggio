#include <stdio.h>

int main(void) {
    int i;
    printf("Hello, World!\n");

    for(i=0;i<10;i++) {
        printf("%d ",i);
    }
    printf("\n");
    i=0;
    while(i<10) {
        printf("%d ",(i+1));
        i++;
    }
    printf("\n");

    return 0;
}