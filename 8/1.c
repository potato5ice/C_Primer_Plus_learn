#include <stdio.h>
int main()
{

    char c[]={'H','\007','\n','\b'};
    // while((c=getchar())!=EOF)
    // {
    //     putchar(c) ;
    // } 
    char *p = c;
    while(*p!='\0')
    {
        putchar(*p++);
    }
    return 0;
}

// }
// void display(char ch,int lines,int width );


// int main()
// {
//     int lines,width;
//     int ch;
//     printf("Enter character: ");
//     // scanf("%c",&ch);
//     //(ch=getchar())!='\n'
//     while((ch=getchar())!='\n')
//     {
//         printf("Enter number of lines: ");
//         scanf("%d",&lines);
//         printf("Enter number of characters per line: ");
//         scanf("%d",&width);

//         display(ch,lines,width);        
//         while(getchar()!='\n')
//         {
//             continue;
//         }
//         printf("Enter next character: ");
//     }
//     printf("End of program");

//     return 0;
// }

// void display(char ch,int lines,int width )
// {
//     for(int i=0;i<lines;i++)
//     {
//         for(int j=0;j<width;j++)
//         {
//             putchar(ch);
//         }
//         putchar('\n');
//     }
// }
