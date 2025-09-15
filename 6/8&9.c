#include<stdio.h>
double calculate(double x, double y)
{
    if(x>y)
    {
        return (x-y)/x*y;
    }
    else{
        return (y-x)/y*x;
    }
}
int main()
{
    double x, y;
    printf("Enter two numbers: ");
    int ret=scanf("%lf %lf", &x,&y);
    while(ret==2)
    {
       printf("%.3lf\n", calculate(x,y));
       printf("Enter next two numbers: ");
       ret=scanf("%lf %lf", &x,&y);
    }
    printf("bye!\n");
    return 0;

}