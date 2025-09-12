#include<stdio.h>
int main()
{
    double cup;
    printf("Enter the number of cup: ");
    scanf("%lf",&cup);
    printf("pint=%.2f,zhousi=%.2f,spoonTea=%.2f,cupTea=%.2f\n",cup/2,cup*8,cup*8/2,cup*8/2/3);
    return 0;
}