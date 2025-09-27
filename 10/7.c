
#include <stdio.h>
#define ROWS 5
#define COLS 4
void copy_arr(int row, double target[][COLS], double source[][COLS]); // 函数声明
int main()
{
    int rows, cols;
 
    double source[ROWS][COLS] = {
        {1.1, 1.2, 1.3, 1.4},
        {2.1, 2.2, 2.3, 2.4},
        {3.1, 3.2, 3.3, 3.4},
        {4.1, 4.2, 4.3, 4.4},
        {5.1, 5.2, 5.3, 5.4},
    };
    double target[ROWS][COLS];
    for ( rows = 0; rows < ROWS; rows++)        // 复制每一行
        copy_arr(rows, target, source);
    
    printf("The target array now as following:\n"); // 打印目标数组
    for ( rows = 0; rows < ROWS; rows++)
    {
        for (cols = 0; cols < COLS; cols++)
        {
            printf("target[%d][%d] = %4.1lf  ",rows, cols, target[rows][cols]);
        }
        putchar('\n');
    }
    return 0;
}
 
void copy_arr(int row, double target[][COLS], double source[][COLS])
{
    int col;
    
    for ( col = 0; col < COLS; col++)
    {
        target[row][col] = source[row][col];
    }    
}