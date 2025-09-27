#include <stdio.h>
#define ROWS 3
#define COLS 5
// 复制数组函数（将source内容复制到target，超出部分置自动填充0.0）
void copy_arr(int rows, int cols, double target[rows][cols], double source[][COLS]); 
// 打印数组函数
void print_arr(int rows, int cols, double target[rows][cols]);
 
int main()
{
    int rows, cols;
    // 源数组：3行5列
    double source[3][5] = {
        {1.1, 1.2, 1.3, 1.4, 1.5},
        {2.1, 2.2, 2.3, 2.4, 2.5},
        {3.1, 3.2, 3.3, 3.4, 3.5}
    };
 
    // 提示用户输入目标数组的行数和列数（需大于等于源数组）
    printf("Please input the rows and cols for target array:\n");
    while( scanf("%d %d",&rows, &cols) == 2)
    {
        if ((rows >= ROWS) && (cols >= COLS))
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
    // 声明目标数组（在rows和cols赋值后声明，符合VLA要求）
    double target[rows][cols];
    copy_arr(rows, cols, target, source);       // 复制数组
    print_arr(rows, cols, target);
 
    return 0;
}
// 复制数组：source范围内的元素复制，超出部分置0
void copy_arr(int rows, int cols, double target[rows][cols], double source[][COLS])
{
    int i, j;    
 
    for ( i = 0; i < ROWS; i++)
    {
        for ( j = 0; j < COLS; j++)
        {
            target[i][j] = source[i][j];
        }
    }
}
// 打印数组，使用正确的double格式符%lf
void print_arr(int rows, int cols, double target[rows][cols])
{
    int i, j;      
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("target[%d][%d] = %4.2lf; ",i, j, target[i][j]);
        }
    putchar('\n');
    }
}