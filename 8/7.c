#include <stdio.h>
#include <string.h>

#define OVERTIME_RATE 40
#define TAX_RATE_300 0.15
#define TAX_RATE_450 0.20
#define TAX_RATE_LARGER_THAN_450 0.25

void calculate_salary_and_tax(double salary, int hours) {
    double salary_sum, tax;

    if (hours > OVERTIME_RATE) {
        salary_sum = (hours - OVERTIME_RATE) * salary * 1.5 + OVERTIME_RATE * salary;
    } else {
        salary_sum = hours * salary;
    }

    if (salary_sum <= 300) {
        tax = salary_sum * TAX_RATE_300;
    } else if (salary_sum <= 450) {
        tax = (salary_sum - 300) * TAX_RATE_450 + 300 * TAX_RATE_300;
    } else {
        tax = (salary_sum - 450) * TAX_RATE_LARGER_THAN_450 + 300 * TAX_RATE_300 + 150 * TAX_RATE_450;
    }

    printf("税前工资：%.2f 税金：%.2f 净收入：%.2f\n", salary_sum, tax, salary_sum - tax);
}

void display_menu() {
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate of action:\n");
    printf("%-12s %-12s\n", "a) $8.75/hr", "b) $9.33/hr");
    printf("%-12s %-12s\n", "c) $10.00/hr", "d) $11.20/hr");
    printf("%-12s\n", "5) quit");
    printf("*****************************************************************\n");
}

int main() {
    double salary;
    char level;
    int hours;

    while (1) {
        display_menu();
        printf("请输入工资等级：");
        if (scanf("%c", &level) != 1) {
            printf("输入错误，请重新输入！\n");
            // 清空输入缓冲区
            while (getchar() != '\n');
            continue;
        }

        if (level == '5') {
            break;
        }

        // 如果输入不是 'a' 到 'd' 且不是 '5'，则提示错误并重新输入
        if (level < 'a' || level > 'd') {
            printf("输入错误，请重新输入！\n");
            // 清空输入缓冲区
            while (getchar() != '\n');
            continue;
        }

        printf("请输入工作小时数：");
        if (scanf("%d", &hours) != 1) {
            printf("输入错误，请重新输入工作小时数！\n");
            // 清空输入缓冲区
            while (getchar() != '\n');
            continue;
        }

        switch (level) {
            case 'a':
                salary = 8.75;
                break;
            case 'b':
                salary = 9.33;
                break;
            case 'c':
                salary = 10.00;
                break;
            case 'd':
                salary = 11.20;
                break;
            default:
                continue;
        }

        calculate_salary_and_tax(salary, hours);
    }

    printf("程序结束\n");
    return 0;
}
