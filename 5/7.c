#include <stdio.h>
double cubic_value(double x)
{
    return x*x*x;
}
int main()
{
    double x;
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    printf("The cubic value of %.2lf is %.2lf\n", x, cubic_value(x));
    return 0;

}