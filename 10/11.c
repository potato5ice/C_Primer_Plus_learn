#include <stdio.h>
#define ROWS 3
#define COLS 5
void  print_arr(int rows,  double target[][COLS]);
void double_arr(int rows, double source[][COLS], double target[][COLS]);
int main()
{
    double source[ROWS][COLS] = {
        {1.1, 1.2, 1.3, 1.4, 1.5},
        {2.1, 2.2, 2.3, 2.4, 2.5},
        {3.1, 3.2, 3.3, 3.4, 3.5}
    };
    double target[ROWS][COLS];
    double_arr(ROWS,source,target);       
    print_arr(ROWS, target);
 
    return 0;
}

// 打印数组，使用正确的double格式符%lf
void print_arr(int rows,  double target[][COLS])
{
    int i, j;      
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < COLS; j++)
        {
            printf("target[%d][%d] = %4.2lf; ",i, j, target[i][j]);
        }
    putchar('\n');
    }
}
void double_arr(int rows, double source[][COLS], double target[][COLS])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            target[i][j] = source[i][j] * 2;
        }
    }

}