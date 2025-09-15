#include <stdio.h>

int main()
{
    char c='A';
    for(int j=1;j<=6;j++)
    {
        
        for(int i=1;i<=j;i++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}

