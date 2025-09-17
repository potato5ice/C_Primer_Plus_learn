#include <stdio.h>
int main()
{
    char x;
    int space=0;
    int newline=0;
    int ch=0;
    int sum=0;
    while((scanf("%c", &x)==1)&&x!='#')
    {
        switch(x)
        {
            case ' ':
                space++;
                break;
            case '\n':
                newline++;
                break;
            default:
                ch++;
                break;   
        }
        sum++;
    }
    printf("%d\n", sum);//number of characters in the string
    printf("\n");
    printf("Number of spaces: %d\n", space);
    printf("Number of newlines: %d\n", newline);
    printf("Number of characters: %d\n", ch);
    return 0;
}