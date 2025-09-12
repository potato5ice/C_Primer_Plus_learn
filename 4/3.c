#include <stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    printf("The input is  %.1lf is %.1e\n", x, x);
    printf("The input is  %+.3lf is %.3e\n", x, x);
    return 0;
}