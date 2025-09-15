
#include<stdio.h>
int main(void)
{
	char arr[256];
	printf("输入一行字符,按下enter键结束:\n");
	int i = 0;
	do
	{
		scanf("%c", &arr[i]);
	}
	while(arr[i] != '\n' && ++i);
	printf("倒序为:\n");
	for(i--; i >= 0; i--)
	{
        // printf("%d ", i);
		printf("%c ", arr[i]);
	}
	printf("\n Done");
	return 0;
}