#include <stdio.h>
#include <string.h>
#define overtime_rate 40
#define  tax_rate_300 0.15
#define  tax_rate_450 0.20
#define  tax_rate_larger450 0.25
void salary_calculate(double salary)
{
    int hour;
    double tax;
    double salary_sum;
    printf("请输入工作小时数：\n");
    // while(scanf("%d", &hour)== 1 && hour > 0 )
    // {
        scanf("%d", &hour);
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
        // printf("请输入工作小时数：\n");
    // }
    return;
}
    
int main()
{
    double salary;
    int level;
    char str[]="Enter the number corresponding to the desired pay rate of action:";
   part1: printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate of action:\n");
    printf("%-*s %-*s\n",strlen(str)/2+4,"1) $8.75/hr",strlen(str)/2,"2) $9.33/hr");
    printf("%-*s %-*s\n",strlen(str)/2+4,"3) $10.00/hr",strlen(str)/2,"4) $11.20/hr");
    printf("%-*s\n",strlen(str)/2,"5) quit");
    printf("*****************************************************************\n");
   part2: printf("请输入工资等级：");
    while(scanf("%d", &level)== 1 )
    {
        switch(level)
        {
            case 1:
                salary=8.75;
                salary_calculate(salary);
                goto part2;
                
            case 2:
                salary=9.33;
                salary_calculate(salary);
                goto part2;
                
            case 3:
                salary=10.00;
                salary_calculate(salary);
                goto part2;
               
            case 4:
                salary=11.20;
                salary_calculate(salary);
                goto part2;
            case 5:
                
                goto part3;
            default:
                printf("输入错误，请重新输入！\n");
                goto  part1;
            
        }
    }
    part3:printf("程序结束\n");

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// #define OVERTIME_RATE 40
// #define TAX_RATE_300 0.15
// #define TAX_RATE_450 0.20
// #define TAX_RATE_LARGER_THAN_450 0.25

// void calculate_salary_and_tax(double salary, int hours) {
//     double salary_sum, tax;

//     if (hours > OVERTIME_RATE) {
//         salary_sum = (hours - OVERTIME_RATE) * salary * 1.5 + OVERTIME_RATE * salary;
//     } else {
//         salary_sum = hours * salary;
//     }

//     if (salary_sum <= 300) {
//         tax = salary_sum * TAX_RATE_300;
//     } else if (salary_sum <= 450) {
//         tax = (salary_sum - 300) * TAX_RATE_450 + 300 * TAX_RATE_300;
//     } else {
//         tax = (salary_sum - 450) * TAX_RATE_LARGER_THAN_450 + 300 * TAX_RATE_300 + 150 * TAX_RATE_450;
//     }

//     printf("税前工资：%.2f 税金：%.2f 净收入：%.2f\n", salary_sum, tax, salary_sum - tax);
// }

// void display_menu() {
//     printf("*****************************************************************\n");
//     printf("Enter the number corresponding to the desired pay rate of action:\n");
//     printf("%-12s %-12s\n", "1) $8.75/hr", "2) $9.33/hr");
//     printf("%-12s %-12s\n", "3) $10.00/hr", "4) $11.20/hr");
//     printf("%-12s\n", "5) quit");
//     printf("*****************************************************************\n");
// }

// int main() {
//     double salary;
//     int level, hours;

//     while (1) {
//         display_menu();
//         printf("请输入工资等级：");
//         if (scanf("%d", &level) != 1 || level < 1 || level > 5) {
//             printf("输入错误，请重新输入！\n");
//             // 清空输入缓冲区
//             while (getchar() != '\n');
//             continue;
//         }

//         if (level == 5) {
//             break;
//         }

//         printf("请输入工作小时数：");
//         if (scanf("%d", &hours) != 1) {
//             printf("输入错误，请重新输入工作小时数！\n");
//             // 清空输入缓冲区
//             while (getchar() != '\n');
//             continue;
//         }

//         switch (level) {
//             case 1:
//                 salary = 8.75;
//                 break;
//             case 2:
//                 salary = 9.33;
//                 break;
//             case 3:
//                 salary = 10.00;
//                 break;
//             case 4:
//                 salary = 11.20;
//                 break;
//             default:
//                 continue;
//         }

//         calculate_salary_and_tax(salary, hours);
//     }

//     printf("程序结束\n");
//     return 0;
// }
