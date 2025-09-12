#include <stdio.h>
#include <math.h>
#define INCH_PER_FEET 12.0
#define INCH_PER_CM 0.0328084
int main()
{
    double centimeter, feet, inches;
    printf("Enter a length in centimeters: ");
    scanf("%lf", &centimeter);
    while(centimeter > 0)
    {
        feet = centimeter *INCH_PER_CM;
        // double guocheng=feet -(int)feet;
        // printf("%.3lf\n",feet);
        double guocheng=fmod(feet,1.0);//取小数部分
        // printf("%.3lf\n",guocheng);
        if(guocheng>0)
        {
            inches = guocheng*INCH_PER_FEET;
        }
        else
        {
            inches = 0;
        }
        printf("%.1lf cm = %d feet %.1lf inches\n", centimeter, (int)feet, inches);
        printf("Enter a length in centimeters(<=0 to quit): ");
        scanf("%lf", &centimeter);
    }
    if(centimeter <= 0)
    {
        printf("bye\n");
    }
    return 0;
}