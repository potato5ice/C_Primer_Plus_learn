#include <stdio.h>
#define salary 10
#define overtime_rate 40
#define  tax_rate_300 0.15
#define  tax_rate_450 0.20
#define  tax_rate_larger450 0.25

int main()
{
    int hour;
    double tax;
    double salary_sum;
    printf("请输入工作小时数：\n");
    while(scanf("%d", &hour)== 1 && hour > 0)
    {
        if(hour>40)
        {
            salary_sum=(hour-overtime_rate)*salary*1.5+overtime_rate*salary;
        }
        else
        {
            salary_sum=hour*salary;
        }
        
        if(salary_sum<=300)
        {
            tax=salary_sum*tax_rate_300;

            printf("税前工资：%.2f 税金：%.2f 净收入：%.2f\n", salary_sum, tax, salary_sum-tax);
        }
        else if(salary_sum<=450)
        {
            tax=(salary_sum-300)*tax_rate_450+300*tax_rate_300;    

            printf("税前工资：%.2f 税金：%.2f 净收入：%.2f\n", salary_sum, tax, salary_sum-tax);
        }
        else
        {
            tax=(salary_sum-450)*tax_rate_larger450+300*tax_rate_300+150*tax_rate_450;    

            printf("税前工资：%.2f 税金：%.2f 净收入：%.2f\n", salary_sum, tax, salary_sum-tax);
        }
        printf("请输入工作小时数：\n");
    }
    printf("程序结束\n");
    return 0;
}