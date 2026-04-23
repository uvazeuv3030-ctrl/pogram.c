#include <stdio.h>

void passByValue(int x, int y) {
    int i;
    for(i = 0; i < 3; i++) {
        x = x + 1;
        y = y + 1;
        printf("Inside passByValue (Iteration %d): x = %d, y = %d\n", i+1, x, y);
    }
}

int main() {
    int a = 5, b = 10;

    printf("Before passByValue: a = %d, b = %d\n", a, b);
    passByValue(a, b);
    printf("After passByValue: a = %d, b = %d\n", a, b);

    return 0;
}