#include<stdio.h>
void smile()
{
    printf("Smile!");
    
}
int main()
{
    for(int i=3;i>0;i--)
    {
        for(int k=0;k<i;k++)
        {
            smile();
            if(k==i-1)
            {
                printf("\n");
            }
        }
    }
    return 0;

}