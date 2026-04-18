#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Output Integer = %d\n", a);
    printf("Enter a float value: ");
    scanf("%f", &b);
    printf("Output Float = %f\n", b);
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Output Character = %c\n", c);
    return 0;
}