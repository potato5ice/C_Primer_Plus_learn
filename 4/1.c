// #include <stdio.h>
// #include <string.h>
// #define Q "His Hamlet was funny without being vulgar."
// int main()
// {
//     // printf("He sold the painting for $%2.2f.\n",2.345e2);
//     // printf ("%c%c%c\n",'H',105,'\41');
//     // printf ("%s\nhas %d characters.\n",Q,strlen(Q));
//     // printf ("Is %2.2e the same as %2.2e?\n",1201.0,1201.0);
//     char str1[100];
//     char str2[100];
//     printf("Enter two strings: ");
//     scanf("%s",str1);
//     scanf("%s",str2);
//     printf("%s,%s\n",str1,str2);
//     return 0;
// }

#include<stdio.h>
int main(void)
{ 
 char last_name[30];/*可自行更改数据要占用的字符*/
 char fast_name[30];/*可自行更改数据要占用的字符*/
 printf("请分别输入您的名和姓,并用空格间隔开。\n");
 scanf("%s",last_name);
//  getchar();
 scanf("%s",fast_name);
 printf("%s,%s\n",last_name,fast_name);
 return 0;
}