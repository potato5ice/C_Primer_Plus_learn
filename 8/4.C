#include<stdio.h>
#include<ctype.h>
int main(void){
    char c,previou;
    int cnt=0, sum=0;
    //cnt 单词的个数 sum字母的总数
    printf("please enter:");

    while((c=getchar())!=EOF)
    {
        if(isalpha(c))
        {
            if(!(isalpha(previou)))
            {
                cnt+=1;
            }
            // previou=c;
            sum+=1;
        }
        previou=c;
    }

    printf("done!\n");
    printf("the numbers of the  total letters are:%d\n",sum); 
    printf("the numbers of the the average letters are :%d\n",sum/cnt);
    printf("the number of the words are:%d",cnt); 
    return 0; 
}


