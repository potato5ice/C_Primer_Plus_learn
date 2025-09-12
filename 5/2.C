#include <stdio.h>
#define interval 10
int main()
{
    int number;
    printf("Enter the number of minutes: ");
    scanf("%d", &number);
    for(int i = number; i <= number+interval; i++)
    {
        printf("%d ", i);
    }
    for(int i = number; i <= number+interval; i++)
    {
        printf("%d\t",i);
    }
    for(int i = number; i <= number+interval; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}