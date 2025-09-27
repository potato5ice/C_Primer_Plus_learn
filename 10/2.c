#include <stdio.h>
void copy_arr( double target[], double source[], int n)
{
    for (int i = 0; i < n; i++)
    {
        target[i] = source[i];
    }
   
}
void copy_ptr( double *target, double source[], int n)
{
    for (int i = 0; i < n; i++)
    {
        target[i] = *source++;
    }
}
void copy_ptrs( double target[], double *start, double *end)

{
    for (int i = 0; start < end; i++)
    {
        target[i] = *start++;
    }
    
}
int main()
{
    double source[5]={1.2, 3.4, 5.6, 7.8, 9.0};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source+5);
    for(int i = 0; i < 5; i++)
    {
        printf("target1[%d] = %.2lf ", i, target1[i]);
        printf("target2[%d] = %.2lf ", i, target2[i]);
        printf("target3[%d] = %.2lf \n", i, target3[i]);
    }
    return 0;
}
