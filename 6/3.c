#include <stdio.h>

int main()
{
    for(int j=1;j<=6;j++)
    {
        char c='F';
        for(int i=1;i<=j;i++)
        {
            printf("%c",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}

