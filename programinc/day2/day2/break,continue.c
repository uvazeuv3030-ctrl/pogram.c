#include <stdio.h>

int main() {
    int i;

    printf("Using continue (skip number 5):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            continue;  // skip 5
        }
        printf("%d ", i);
    }

    printf("\n\nUsing break (stop at 5):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            break;  
        }
        printf("%d ", i);
    }

    return 0;
}