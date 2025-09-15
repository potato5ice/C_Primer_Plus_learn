#include <stdio.h>
int main()
{
    int ch[8];
    for(int i=0; i<8; i++)
    {
        scanf("%d", &ch[i]);
    }
    printf("\n");
    for(int j=7; j>=0; j--)
    {
        printf("%d ", ch[j]);
    }
    return 0;

}