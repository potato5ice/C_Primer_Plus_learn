#include <stdio.h>

int  main()
{
    int i,j,k;

    for(i=1;i<=5;i++){          //打印行数,共5行
        for(j=1;j<=5-i;j++){
            printf(" ");        //打印每行的空格数
        }
        char c='A';
        for(k=1;k<=2*i-1;k++){      //打印

            if(k+j>5)
            {
                if(c<'A')
                {
                    break;
                }
                else
                {
                    printf("%c",c);
                    c--;
                }
            }
            else
            {
                printf("%c",c);
                c++;
            }
        }
        printf("\n");           //换行
    }
    return 0;
}