#include <stdio.h>
#define MONTHS 12
#define YEARS 5
float total_rain_year(const float (*rain)[MONTHS], int year)
{
    float sum = 0.0;
    float total = 0.0;
    for(int i=0; i<year; i++)
    {
        for(int month=0; month<MONTHS; month++)
            sum += rain[i][month];
        printf("Year %5d: %15.1f inches\n", i+2010, sum);
        total += sum;
    }
    return total;
}
void total_rain_month( const float *rain,int month,int year)
{
    
    // float total = 0.0;
    for(int j=0; j<month; ++j)
    {
        float sum = 0.0;
        for(int i=0; i<year; ++i)
        {
            //sum += *(rain+j*year+i);
            sum +=*(rain+i*month+j);
        }
        printf("%.1f\t",  sum/year);
    }
    
}

void Rainfall_title(void)
{
    printf("YEAR\tRAINFALL(inches)\n");
}
void month_average(void)
{
    printf("MONTHLY AVERAGES:\n");
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
}

int main()
{
   const float rain[YEARS][MONTHS] = {
    {4.5, 5.0, 4.3, 3.9, 4.2, 4.0, 4.2, 4.5, 4.0, 3.9, 4.3, 4.5},
    {4.1, 4.3, 4.2, 4.1, 4.0, 4.2, 4.1, 4.3, 4.2, 4.1, 4.2, 4.3},
    {3.8, 4.0, 3.9, 3.8, 3.9, 4.0, 3.9, 3.8, 3.9, 4.0,  2,  1},
    {3.5, 3.7, 3.6, 3.5, 3.6, 3.7, 3.6, 3.5, 3.6, 3.7,  2,  1},
    {3.2, 3.4, 3.3, 3.2, 3.3, 3.4, 3.3, 3.2, 3.3, 3.4,  1,  2}};
   Rainfall_title();
   printf("\nThe yearly average if %.1f inches.\n\n", total_rain_year(rain, YEARS));
   month_average();
   total_rain_month((const float*)rain,MONTHS, YEARS);
   printf("\n");
    return 0;
}
