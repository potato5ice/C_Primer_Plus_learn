#include <stdio.h>
#include<float.h>

int main()
{
    double x=1.0/3.0;
    float y=1.0/3.0;
    printf("x=%.16f %.12f %.6f\n",x,x,x);
    printf("y=%.16f %.12f %.6f\n",y,y,y);
    printf("%d %d \n",FLT_DIG,DBL_DIG);
    return 0;
}