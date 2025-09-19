#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch ;
    printf("Enter a string: ");
    while(( ch=getchar())!=EOF)
    {

        if(!(isspace(ch) || ispunct(ch)))
        {
            printf("%c is first non-space, non-punct character\n", ch);
            break;
        }
    }

    return 0;
}