#include<stdio.h>
int main()
{
    float inch ;
    char str[100];
    printf("Enter the length in inches: ");
    scanf("%f", &inch);
    printf("Enter the name of the person: ");
    scanf("%s", str);
    printf("%s,you are %.3f inches tall.\n", str, inch);
    return 0;
}