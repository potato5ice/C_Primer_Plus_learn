#include <stdio.h>
int main()
{
    long start, end;        //起始数值，结束数值
    long i;
    int ret;           //scanf判断返回数值
 
    printf("Please entry starting number and endber (q to quite).\n");
    ret = scanf("%ld %ld",&start, &end);
    
 
    //循环判断如果输入2个数其中一个或都不是数值，或者输入的数值大小顺序反了的情况
    for (i = start; ret == 2 && start < end && i <= end; i++)
    {
        printf(" Start Number | square number | cube number |\n");    
        printf("%-13ld |%-14ld |%-12ld |\n",i,i*i,i*i*i);//左对齐
        //printf("%13ld |%14ld |%12ld |\n",i,i*i,i*i*i);//右对齐
        // printf("%*ld |%*ld |%*ld |\n",13/2,i,14/2,i*i,12/2,i*i*i);
        
    }
    printf("Thanks for using program!\n");
    return 0;
}