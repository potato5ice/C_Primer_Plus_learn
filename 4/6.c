
#include <stdio.h>
#include<string.h>/*提供strlen()函数*/
int main(void)
{
	char name[30], surname[30];
	int name_wid, surname_wid;
	printf("请输入名：\n");
	scanf("%s",name);
	printf("请输入姓：\n");
	scanf("%s",surname);
	name_wid = strlen(name);/*strlen()函数计算字符串中字符个数不包括\0*/
	surname_wid = strlen(surname);
	printf("%s %s\n",name,surname);/*'*'修饰符可以控制输出字段宽度和精度*/
	printf("%*d %*d\n", name_wid, name_wid, surname_wid, surname_wid);/*结尾对齐*//*第一个数字代表字段宽度，第二个数字代表字段*/ 
	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", name_wid, name_wid, surname_wid, surname_wid);/*开头对齐*/
	getchar();/*方便看运行结果*/
	getchar();
	return 0;
}
 