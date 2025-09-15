#include <stdio.h>

int main()
{

    int friends_count=5;
    int week=0;
    int i=1;
    do
    {
        friends_count =(friends_count-i)*2;
        week++;
        i++;
        printf("Week %d: %d\n",week,friends_count);

        
    } while (friends_count <= 150);
    printf("after %d weeks, %d friends larger than 150.\n",week,friends_count);
    
    return 0;
}