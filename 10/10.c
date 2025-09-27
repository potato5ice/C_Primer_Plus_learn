#include <stdio.h>
#define MAX_SIZE 7
void sum_arr( double target[], double source1[], double source2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        target[i] = source1[i] + source2[i];
        printf("target[%d]:%.2lf+%.2lf= %.2lf \n",i,source1[i],source2[i],target[i]);
    }
   
}
int main()
{
    double parm1[MAX_SIZE] ;
    double parm2[MAX_SIZE] ;
    int size=0;
    double target[size];
    int i=0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter a double number: ");
    while((scanf("%lf %lf", &parm1[i], &parm2[i])==2)&&i<MAX_SIZE-1)
    {
        i++;
        printf("Enter next double number: ");
    }
    sum_arr(target, parm1,parm2, size);
    return 0;
}