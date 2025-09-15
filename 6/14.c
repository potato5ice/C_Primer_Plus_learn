#include<stdio.h>
int main()
{
    double a[8];
    double b[8];
    for(int i=0;i<8;i++)
    {
        scanf("%lf ",&a[i]);
        for(int j=0;j<=i;j++)
        {
            if(j==0)
            {
                b[j]=a[j];
            }
            else
            {
                b[j]=b[j-1]+a[j];
            }
        }

    }
    for(int i=0;i<8;i++)
    {
        printf("%5.2lf ",a[i]);
    }
    printf("\n");
    for(int i=0;i<8;i++)
    {
        printf("%5.2lf ",b[i]);
    }
    return 0;
}