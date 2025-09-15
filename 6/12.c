#include<stdio.h>
void sum(int a)
{
    double sum1,sum2;
    int temp=1;
    sum1=0.0;
    sum2=0.0;
    for(int i=1;i<=a;i++)
    {
        sum1+=1.0/i*1.0;
    }
    for(int i=1;i<=a;i++)
    {
        sum2+=temp*1.0/i*1.0;
        temp=-temp;
    }
    printf(" %d Sum of series is: %.3f\n",a,sum1);
    printf(" %d Sum of series is: %.3f\n",a,sum2);
    return ;

}
int main()
{
    int x;
    printf("Enter a number of sequency terms: ");
    scanf("%d",&x);
    while(x>0)
    {
        sum(x);
        printf("Enter a number of sequency terms: ");
        scanf("%d",&x);
    }
    return 0;
}

