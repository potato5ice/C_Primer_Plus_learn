#include <stdio.h>
#include <math.h>
int IsPrime(int x)
{
    int result=1;
    unsigned long i;
    if(x==1||(x%2==0 &&x!=2))
    {
        result= 0;
    }
    for(i=3;i<=sqrt(x);i+=2)
    {
        if(x%i==0)
        {
            result= 0;
            break;
        }
    }

    return result;
}
int main()
{
    unsigned long num;
    printf("Enter a number: ");
    while(scanf("%lu", &num)== 1 && num>=2)
    {
        printf("Prime numbers less than or equal to %lu are:\n",num);
        for(int i=2;i<=num;i++)
        {
            if(IsPrime(i))
            {
                printf("%lu ",i);
            }
        }
        printf("\nEnter a number: ");
    }
    printf("Program terminated.\n");
    return 0;
}