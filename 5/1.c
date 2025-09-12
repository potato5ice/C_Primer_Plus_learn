#include <stdio.h>
#define MINUTES_PER_HOUR 60
int main()
{
    int minutes;
    int hours, remaining_minutes;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    while(minutes >0)
    {
        
        hours = minutes / MINUTES_PER_HOUR;
        remaining_minutes = minutes % MINUTES_PER_HOUR;
        printf("%d hours and %d minutes\n", hours, remaining_minutes);
        printf("Enter the number of minutes: ");
        scanf("%d", &minutes);
    }

    return 0;   

}