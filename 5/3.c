#include <stdio.h>
#define DAYS_PER_WEEK 7

int main()
{
    int number;
    int weeks, days;
    printf("Enter a number: ");
    scanf("%d", &number);
    while(number >0)
    {
        
        weeks = number / DAYS_PER_WEEK;
        days = number % DAYS_PER_WEEK;
        printf("%d days are %d weeks,  %d days\n", number,weeks, days);
        printf("Enter a number: ");
        scanf("%d", &number);
    }

    return 0;   

}