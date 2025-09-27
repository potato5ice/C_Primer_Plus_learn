#include <stdio.h>
#define MAX_SIZE 7
void copy_arr( double target[], double source[], int n)
{
    for (int i = 0; i < n; i++)
    {
        target[i] = source[i+n-1];
    }
   
}
int main()
{
    double source[7] ;
    double target[3];
    int i=0;
    printf("Enter a double number: ");
    while((scanf("%lf", &source[i])==1)&&i<MAX_SIZE-1)
    {
        i++;
        printf("Enter a double number: ");
    }
    copy_arr(target, source, 3);
    for(i=0;i<3;i++)
    {
        printf("target[%d]: %.2lf \n",i,target[i]);
    }
    return 0;
}