#include<stdio.h>
int main()
{
    double km,liters,gallons,miles;
    #define  Gallon_Liters  3.785//一加仑等于3.785升
    #define  Mile_Kilometers  1.609//一英里等于1.609千米
    printf("请输入旅行的里程数：\n");
    scanf("%lf",&miles);
    printf("请输入汽车的油耗：\n");
    scanf("%lf",&gallons);
    printf("每加仑汽油行驶的英里数：%.1f\n",miles/gallons);

    km=miles*Mile_Kilometers;
    liters=gallons*Gallon_Liters;
    printf("汽车行驶的公里数：%.1f\n",100*liters/km);
    return 0;
}

// #include<stdio.h>
// const float GALLON_COVT = 3.785;
// const float MILE = 1.609;
// int main(){
// float mileage,fuel_consumption;
// float guochen1;    //每一加仑的千米数
// float guochen2;    //转换100千米的倍数
// float x1;          //x1为每加仑的英里数
// float x2;          //x2为每100千米的加仑数
// float x3;          //x3为每一升的千米数
// printf("Please enter the mileage of your trip(unit:mile):\n");
// scanf("%f",&mileage);
// printf("Please enter the fuel consumption(unit:gallon):\n");
// scanf("%f",&fuel_consumption);
// x1 = mileage / fuel_consumption;
// printf("每加仑的英里数:%f\n",x1);
// guochen1 = x1 * MILE;
// guochen2 = 100 / guochen1;
// printf("每一加仑的千米数:%f\n",guochen1);
// printf("转换100千米的倍数%f\n",guochen2);
// x2 = guochen2 * GALLON_COVT;   //美国算法
// printf("每100千米的加仑数:%f\n",x2);
// x3 = guochen1 / GALLON_COVT;   //欧洲算法
// printf("每一升的千米数:%f\n",x3);
// printf("Worth it based on your input:\n%.1f miles per gallon.\n\
// %.1f gallon per 100 kilometres.\n%.1f kilometres per litre.\n ",x1,x2,x3);
// return 0;
// }

