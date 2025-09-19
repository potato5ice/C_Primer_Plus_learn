
#include <stdio.h>

void display_menu();
void display_menu() {
    printf("********************************************\n");
    printf("Enter the operation of your choice :\n");
    printf("%-11s %-11s\n", "a.add", "s.subtract");
    printf("%-11s %-11s\n", "m.multiply", "d.divide");
    printf("%-11s\n", "q.quit");
    printf("*********************************************\n");
}
// void display_menu() {
//     printf("********************************************\n"
//            "Enter the operation of your choice:\n"
//            "%-11s %-11s\n"
//            "%-11s %-11s\n"
//            "%-11s\n"
//            "*********************************************\n",
//            "a.add", "s.subtract", "m.multiply", "d.divide", "q.quit");
// }
void add(double first, double second)
{

    printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);

}
void subtract(double first, double second)
{
    printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);

}
void multiply(double first, double second)
{
    printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);

}
void divide(double first, double second)
{
    if (second == 0) 
    {
        printf("Enter a number other than 0:");
        scanf("%lf", &second);
    } 
    printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
    
}

double get_double(const char *prompt) 
{
    double num;
    printf("%s", prompt);
    while(scanf("%lf", &num) != 1)
    {
        int ch;
        while((ch=getchar())!='\n')
        {
            putchar(ch);
        }
        printf(" is not an number.\nPlease enter a number, such as 2.5, -1.78e8, or 3:");
    }
    return num;

}
int main() {
    double num1, num2;
    char op;
    
    while (1) {
        display_menu();
        op = getchar();
        switch (op) {
            case 'a':
                num1 = get_double("Enter first number:");
                num2 = get_double("Enter second number:");
                add(num1, num2);
                break;
            case's':
                num1 = get_double("Enter first number:");
                num2 = get_double("Enter second number:");
                subtract(num1, num2);
                break;
            case'm':
                num1 = get_double("Enter first number:");
                num2 = get_double("Enter second number:");
                multiply(num1, num2);
                break;
            case 'd':
                num1 = get_double("Enter first number:");
                num2 = get_double("Enter second number:");
                divide(num1, num2);
                break;
            case 'q':
                break;
            default:
                while(getchar()!='\n')continue;
                break;
        }
        if(op == 'q')
        {
            break;
        }
    }
    printf("Bye.\n");
    return 0;
}












