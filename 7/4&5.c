#include <stdio.h>
int main()
{
    char ch;
    int num1 = 0;
    int num2 = 0;
 
    printf("Please entry a sentences:\n");
 
    while ((ch = getchar()) != '#')
    {
        // if (ch == '.')              //情况1，当ch为.打印！
        // {
        //     putchar('!');
        //     num1++;                 //.替换数统计
        // }
        // else if (ch == '!')         //情况2，当ch为！打印！！
        // {
        //     printf("!!");
        //     num2++;                 //！替换数统计
        // }
        // else                        //情况3，其他的不变
        // {
        //     putchar(ch);
        // }
        switch (ch)
        {
        case '.':
            putchar('!');
            num1++;
            break;
        case '!':
            printf("!!");
            num2++;
            break;
        default:
            putchar(ch);
            break;
        }
 
    }
    printf("total \'.\' replace %d times.\n",num1);
    printf("total \'!\' replace %d times.\n",num2);
    return 0;
    
}
