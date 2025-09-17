#include  <stdio.h>
#define single 1
#define headofhousehold 2
#define marital property 3
#define divorced 4
#define single_standard 17850
#define headofhousehold_standard 23900
#define marital_standard 29750
#define divorced_standard 14875
double type_tax[]={0,single_standard,headofhousehold_standard,marital_standard,divorced_standard};
double tax_output(double salary, double standard)
{
    double tax;
    if(salary < standard)
    {
        printf("未达到纳税标准，免征个人所得税！\n");
    }
    else
    {
        tax = standard * 0.15 + (salary - standard) * 0.28;
        printf("个人所得税为：%.2f\n", tax);
    }
    return tax;
}
int main()
{
    int type;
    double salary;
    printf("请选择纳税人类型：\n1.单身\n2.家庭主妇\n3.已婚\n4.离异\n");
    while(scanf("%d", &type)==1&&type>=1&&type<=4)
    {
        printf("请输入个人收入：");
        scanf("%lf", &salary);
        tax_output(salary, type_tax[type]);
        printf("请选择纳税人类型：\n1.单身\n2.家庭主妇\n3.已婚\n4.离异\n");
    }
    return  0;
}