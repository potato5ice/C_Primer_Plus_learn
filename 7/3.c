#include <stdio.h>

int main()
{
    int odd_sum = 0, even_sum = 0, num;
    int odd_num=0, even_num=0;
    int odd_average=0, even_average=0;
    while(scanf("%d", &num)==1&&num!=0)
    {
        if(num%2==0)
        {
            even_sum+=num;
            even_num++;
        }
        else
        {
            odd_sum+=num;
            odd_num++;
        }
    }
    if(odd_num!=0)
    {
        odd_average=odd_sum/odd_num;
        printf("odd numbers is %d and the average is %d\n", odd_num,odd_average);
    }
    if(even_num!=0)
    {
        even_average=even_sum/even_num;
        printf("even numbers is %d and the average is %d\n", even_num,even_average);

    }
    return 0;
}