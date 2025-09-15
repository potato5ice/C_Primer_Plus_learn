#include <stdio.h>

int main()
{
    double Daphone,Deirdre,sumD,sumD2;
    Daphone = 100.0;
    sumD = Daphone;
    Deirdre = 100.0;
    sumD2 = Deirdre ;
    int year = 1;
    do
    {
        sumD += Daphone*0.1;
        sumD2 *= 1.05;
        printf("Daphone: %.2f\n", sumD);
        printf("Deirdre: %.2f\n", sumD2);
        printf("Year: %d\n", year);
        year++;
    }while(sumD >= sumD2);
    printf("%d years passed.Daphone: %.2f lower than Deirdre: %.2f\n", year-1, sumD, sumD2);
    return 0;
}