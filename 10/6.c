#include <stdio.h>

#define MAX_LEN 5
void Reverse(double *str, int len)
{
    int i, j;
    double temp;
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}


int main()
{
    double str[MAX_LEN];
    int i=0;
    printf("Enter a double number: ");
    while((scanf("%lf", &str[i])==1)&&i<MAX_LEN-1)
    {
        i++;
        printf("Enter a double number: ");
    }
    Reverse(str, MAX_LEN);
    printf("Reversed string: \n");
    for(i=0;i<5;i++)
    {
        printf("%.2lf ",str[i]);
    }
    return 0;
}