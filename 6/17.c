#include <stdio.h>

int main()
{
    double lucky_number = 100;
    double sum = lucky_number;
    int year = 1;
    do 
    {
        sum *= 1.08;
        sum -= 10;
        printf("Year: %d\n", year);
        printf("Sum: %.2f\n", sum);
        
        year++;

    }while(sum>0);
    printf("%d years passed, the lucky number is over\n");
    return 0;
    
}
