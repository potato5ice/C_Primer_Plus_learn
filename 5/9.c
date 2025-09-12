#include <stdio.h>
void Temperature(double fahrenheit)
{
    const float kelvin_celsius=273.16;
    double kelvin,celsius;//开氏温度，摄氏温度/kalvin and celsius variables
    celsius=(fahrenheit-32.0)*5.0/9.0;
    kelvin = celsius + kelvin_celsius;
    printf("%.2lf %.2lf %.2lf\n", fahrenheit, celsius, kelvin);
}
int main()
{
    double fahrenheit;
    printf("Enter the temperature in Fahrenheit: ");
    while(scanf("%lf", &fahrenheit)==1)
    {
        Temperature(fahrenheit);
        printf("Enter the temperature in Fahrenheit(enter q to quit): ");
        scanf("%lf", &fahrenheit);
    }
    printf("Bye!");
    return 0;
}