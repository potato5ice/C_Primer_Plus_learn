#include<stdio.h>
int main()
{
    float  speed, size;
    scanf("%f",&speed);
    scanf("%f",&size);
    printf("At %.2f megabits per second, a file of %.2f MB downloads in %.2f  seconds .\n",speed,size,size/speed);
    return 0;
}