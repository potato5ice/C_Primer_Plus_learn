#include <stdio.h>
int main()
{
    char ch;
    char prev_ch='\n';
    int count = 0;
 
    printf("Please entry a sentences:\n");
 
    while ((ch = getchar()) != '#')
    { 
        if((prev_ch == 'e') && (ch == 'i'))
        {
            count++;
        }
        prev_ch = ch;
        continue;
    }
    printf("The number of times 'ei' appears is %d\n", count);
    return 0;
}


