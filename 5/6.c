#include <stdio.h>
double square(int x)
{
    return x*x;
}
double addemup(int x)
{
    double sum;
    for(int i=1;i<=x;i++)
    {
        sum +=square(i);
    }
    return sum;
}
int main()
{
    int x;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    while(x>0)
    {
       printf("%d 天里赚了 %.2lf 元\n",x,addemup(x));
       printf("Enter next value for x: ");
       scanf("%d", &x);
    }
    return 0;

}