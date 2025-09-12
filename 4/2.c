// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     printf("The string entered is: \"%s\"\n", str);
 
//     printf("The string entered is: %-20s\n", str);

//     printf("The string entered is: %20s\n", str);
//     int a =strlen(str);
//     printf("The string entered is: %*s\n", a+3,str);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[40];
	printf("please enter your name.\n");
	scanf("%s",name);
	printf("\"%20s\"\n",name);//右对齐，占20个字符
	printf("\"%-20s\"\n",name);//左对齐，占20个字符
	printf("\"%*s\"\n",strlen(name)+3,name);//占字符串宽度+3个字符,左对齐
	//*用strlen函数计算出name所占宽度，然后加3个宽度 
	// printf("#%.5s#\n", "hello word");
    // printf("#%-15s#\n", "hello word");
    // printf("#%10.15s#\n", "hello word");
	return 0;
}

