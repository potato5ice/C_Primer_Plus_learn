
#include<stdio.h>
void change(int ascii);
int main(void){
    char c;
    int cnt=0;
    printf("please enter:");
    while((c=getchar())!=EOF){
        if(cnt%10==0) printf("\n");
        putchar(c);
        putchar('-');
        change(c);
        cnt++;
    }
    return 0; 
}
void change(int ascii){
    if(ascii=='\t') printf("\\t");
    else if(ascii=='\n') printf("\\n");
    else if (ascii<' ')printf("^%c", ascii + 64);
    else printf("%c ", ascii);
}
