#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch ;
    int upper_count = 0;
    int lower_count = 0;
    printf("Enter a string: ");
    while(( ch=getchar())!=EOF)
    {
        if(isupper(ch))
        {
            upper_count++;
        }
        else if(islower(ch))
        {
            lower_count++;
        }
        else
        {
            continue;
        }
    }
    printf("Uppercase characters: %d\n", upper_count);
    printf("Lowercase characters: %d\n", lower_count);
    return 0;
}