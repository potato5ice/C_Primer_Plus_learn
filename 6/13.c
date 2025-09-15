#include <stdio.h>

int main()
{
    int a[8]={2};
    int j=0;
    for(int i=1; i<8; i++)
    {
        a[i] = a[i-1] * 2;
    }
    do
    {
        printf("%d ", a[j]);
        j++;
    } while (j<8);
    printf("\n");
    
    return 0;
}