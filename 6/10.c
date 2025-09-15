#include<stdio.h>
void sum_of_squares(int i, int j )
{
    int sum=0;
    for(int k=i;k<=j;k++)
    {
         sum+= k*k;
    }
    printf("The sum of squares from %d to %d is %d\n",i*i,j*j,sum);
    return ;
}
int main()
{
    int a ,b;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d",&a,&b);
    while(a<b)
    {
        sum_of_squares(a,b);
        printf("Enter next set of limits: ");
        scanf("%d %d",&a,&b);
    }
    printf("Done\n");
    return 0;
}