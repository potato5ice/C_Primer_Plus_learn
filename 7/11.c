#include <stdio.h>
/**
@brief 运费和包装费计算
@param  price 商品价格
@param  pound 商品重量
@return 无
@date 2025-9-17
@author grape5ice
*/
void discount_shippingfee(double price, int pound)
{
    double shippingfee = 0;
    double discount = 0;

    if(price >=100)
    {
        discount = price * 0.05;
        printf("The discount is %.2lf\n", discount);
    }
    else{
        printf("The price is too low to apply the discount\n");
    }
    if(pound>0 || pound<=5)
    {
        shippingfee +=6.5;
    }
    else if(pound>5 || pound<=20)
    {
        shippingfee += 14;
    }
    else
    {
        shippingfee=14+(pound-20)*0.5; 
    }
    printf("The shipping fee is %.2lf\n", shippingfee);
    printf("The total price is %.2lf\n", price + shippingfee - discount);
    return ;

}
double artichoke(int pound)
{
    double artichoke_price = 2.05 * pound;
    printf("Artichoke:售价为 %.2lf 订购重量(pound): %d total price: $%.2f\n",2.05 ,pound,artichoke_price);
    return artichoke_price;
}
double sugarbeet(int pound)
{
    double sugarbeet_price = 1.15 * pound;
    printf("Sugarbeet:售价为 %.2lf 订购重量(pound): %d total price: $%.2f\n",1.15 ,pound,sugarbeet_price);
    return sugarbeet_price;
}
double carrot(int pound)
{
    double carrot_price = 1.09 * pound;
    printf("Carrot:售价为 %.2lf 订购重量(pound): %d total price: $%.2f\n",1.09 ,pound,carrot_price);
    return carrot_price;
}
void summarize(int arichoke_pound, int sugarbeet_pound, int carrot_pound)
{

    double artichoke_total = 0;
    double sugarbeet_total = 0;
    double carrot_total = 0;
    if(arichoke_pound>0)
    {
         artichoke_total = artichoke(arichoke_pound);
    }
    if(sugarbeet_pound>0)
    {
         sugarbeet_total = sugarbeet(sugarbeet_pound);
    }
    if(carrot_pound>0)
    {
         carrot_total = carrot(carrot_pound);
    }
    double total = artichoke_total + sugarbeet_total + carrot_total;
    printf("Total initial price: $%.2f\n", total);
    discount_shippingfee(total, arichoke_pound+sugarbeet_pound+carrot_pound);
    return ;

}
int main() {

    int a=0;
    int b=0;
    int c=0;
    int sum_artichoke=0, sum_sugarbeet=0, sum_carrot=0;
    char op;
    printf("Please select an option A~C (q to quite):\n");
    while(scanf("%c",&op)==1)
    {
        switch(op)
        {
            case 'a':
            {
                printf("Enter the number of pounds of artichoke: ");
                if(scanf("%d",&a)==1)
                {
                    sum_artichoke +=a;
                }
                else{
                    printf("Invalid input\n");
                }
                break;
            }
            case'b':
            {
                printf("Enter the number of pounds of sugarbeet: ");
                if(scanf("%d",&b)==1)
                {
                    sum_sugarbeet +=b;
                }
                else{
                    printf("Invalid input\n");
                }
                break;
            }
            case 'c':
            {
                printf("Enter the number of pounds of carrot: ");
                if(scanf("%d",&c)==1)
                {
                    sum_carrot +=c;
                }
                else{
                    printf("Invalid input\n");
                }
                break;
            }
            case 'q':
                printf("Print the order\n");
                summarize(sum_artichoke, sum_sugarbeet, sum_carrot);
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }
    return 0;
}
