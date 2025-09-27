#include <stdio.h>
#define ROWS 3
#define COLS 5
 
// 函数声明
void ar_initial(double source[][COLS]);
double ar_row_avg(int r, double source[][COLS]);
double ar_tot_avg( double source[][COLS]);
double ar_max( double source[][COLS]);
 


int main()
{
    int i;
    double r_ar_avg;
    double source[ROWS][COLS];//三行五列的数组
    
    printf("Please enter data for array[%d][%d].\n", ROWS, COLS);
    ar_initial(source);
    
    // 计算并打印每行的平均值
    for (i = 0; i < ROWS; i++)
    {
        r_ar_avg = ar_row_avg(i, source);
        printf("Row number %d average: %.4f\n", i + 1, r_ar_avg);
    }
    
    // 计算并打印总平均值
    printf("Total data average is %.4f\n", ar_tot_avg( source));
    
    // 查找并打印最大值
    printf("The maximum number is: %.4f\n", ar_max( source));
    
    return 0;
}
 
// 初始化数组，从用户输入获取数据
void ar_initial(double source[][COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        printf("Please enter array row %d data:\n", i + 1);  // 调整为从1开始显示行号
        for (j = 0; j < COLS; j++)
        {
            scanf("%lf", &source[i][j]);
        }
    }   
}
 
// 计算指定行的平均值
double ar_row_avg(int r, double source[][COLS])
{
    int j;
    double sub_tot = 0;  // 初始化放在声明处更清晰
    for (j = 0; j < COLS; j++)
    {
        sub_tot += source[r][j];
    }
    return sub_tot / COLS;
}
 
// 计算所有元素的总平均值
double ar_tot_avg( double source[][COLS])
{
    int i, j;
    double tot = 0;  // 简化变量，无需sub_tot
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            tot += source[i][j];
        }
    }
    return tot / (ROWS * COLS);
}
 
// 查找并返回数组中的最大值
double ar_max( double source[][COLS])
{
    int i, j;
    double max_val = source[0][0];  // 直接用一个变量记录全局最大值
    
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (source[i][j] > max_val)  // 直接比较当前元素和全局最大值
            {
                max_val = source[i][j];
            }
        }
    }
    return max_val;    
}



