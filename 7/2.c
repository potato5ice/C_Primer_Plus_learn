
#include <stdio.h>
#include <ctype.h> // 引入 ctype.h 使用 isspace 函数
//空白字符不打印
int main()
{
    char x;
    int sum = 0;
    printf("Enter a string (press # to stop): ");
    while ((scanf("%c", &x) == 1) && x != '#')
    {
        if(x == '\n')
        {
            printf("\n");
            sum = 0;
            continue;
        }
        if (!isspace(x)) // 检查 x 是否为空白字符
        {
            printf("\"%c-%d\" ", x, x);
            sum++;
            if (sum % 8 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("done. ");
    return 0;
}


// //忽略换行键
// #include <stdio.h>
// #include <ctype.h> // 引入 ctype.h 使用 isspace 函数

// int main()
// {
//     char x;
//     int sum = 0;
//     printf("Enter a string (press # to stop): ");
//     while ((scanf("%c", &x) == 1) && x != '#')
//     {
//         if(x == '\n')
//         {
//             printf("\n");
//             sum = 0;
//             continue;
//         }
//         printf("\"%c-%d\" ", x, x);
//         sum++;
//         if (sum % 8 == 0)
//         {
//             printf("\n");
//         }
//     }
//     printf("done. ");
//     return 0;
// }


