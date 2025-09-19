#include<stdio.h>//使用sleep
#include <unistd.h>
#define NUM  20
int main(void){
    int n=50;
    printf("the correct number is %d\n",NUM);
    printf("=============================\n");
    printf("please enter the number that you want to guess.\n");
    printf("ok~ that's begin!\n");
    while(1){

        printf("the number is %d,",n);
        printf("smaller or bigger?\n");
       
        if(n>NUM){
            printf("the number is bigger!\n");
            n=(NUM+n)/2;
            
        }else if (n<NUM) {
            printf("the number is smaller!\n");
            n=(NUM+n)/2;
        }
        else {
            printf("ok,correct!\n");
            break;
        }
        printf("==============\n");
    }
    

    return 0; 
}
