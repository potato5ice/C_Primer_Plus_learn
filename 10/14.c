#include <stdio.h>

void ar_initial(int rows, int cols, double source[rows][cols]);
double ar_avg(int rows, int cols, double source[rows][cols]);
double ar_tot_avg(int rows, int cols, double source[rows][cols]);
double ar_max(int rows, int cols, double source[rows][cols]);
int main()
{
    int rows, cols;
    int i;
    double r_ar_avg;
    printf("Please input the rows and cols for source array:\n");
    while( scanf("%d %d",&rows, &cols) == 2)
    {
        if ((rows > 1) && (cols > 1))
        {    
            printf("Accept the rows and cols for array target[%d][%d]\n", rows, cols);
            break;
        }
        else
        {
            printf("Wrong number for rows and cols.\n");
            printf("Re enter the numbers.\n");
            continue;
        }
    }
    double source[rows][cols];
    ar_initial(rows, cols, source);
    printf("Please entry data for array[%d][%d].\n",rows, cols);
    for ( i = 0; i < rows; i++)
    {
        r_ar_avg = ar_avg(i, cols, source);
        printf("Row number %d average: %4.4lf\n", i+1, r_ar_avg);
    }
 
    printf("Total datas' average is %4.4lf\n", 
    ar_tot_avg(rows, cols, source));
    printf("The maximum number is: %4.4lf\n",
    ar_max(rows, cols, source));
 
    return 0;
}
 
void ar_initial(int rows, int cols, double source[rows][cols])
{
    int i,j;
    for ( i = 0; i < rows; i++)
    {
        printf("Please entry array row %d datas:\n", i);
        for ( j = 0; j < cols; j++)
        {
            scanf("%lf",&source[i][j]);
        }
    }   
}
 
double ar_avg(int rows, int cols, double source[rows][cols])
{
    int j;
    double sub_tot;
    for ( j = 0, sub_tot = 0; j < cols; j++)
    {
        sub_tot += source[rows][j];
    }
    return sub_tot / cols;
}
 
double ar_tot_avg(int rows, int cols, double source[rows][cols])
{
    int i, j;
    double tot, sub_tot;
    for ( i = 0, tot = 0; i < rows; i++)
    {
        for ( j = 0, sub_tot = 0; j < cols; j++)
        {
            sub_tot += source[i][j];
        }
        tot += sub_tot;
    }
    return tot / (rows * cols);
}
 
double ar_max(int rows, int cols, double source[rows][cols])
{
    int i,j;
    double max = source[0][0];
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            if (max < source[i][j])
                max = source[i][j];
            else
                continue;
        }
    }
    return max;    
}