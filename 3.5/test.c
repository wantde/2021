 #define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<stdio.h>
#include<string.h>

void fun()
{
	char str[20] = { 0 };

	printf("请输入一个字符串:\n");
	scanf("%s", str);
	printf("输入的字符串是：%s\n", str);

	int len= strlen(str);
	printf("字符串长度是：%d\n\n", len);

	//循环逆向打印字符串
	for (int i= len- 1; i>= 0; i--)
	{
		printf("%c", str[i]);
	}
}

int main()
{
	fun();
	return 0;
}





//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10]=&arr;
//	printf("%d\n", arr);
//	printf("%d\n", pa);
//	printf("%p\n",pa);
//	printf("%p\n", arr);
//	printf("%p\n",pa+1);
//	printf("%p\n", arr + 1);
//	
//	return 0;
//}



//int main()
//{
//	int i = 0x11223344;
//	char* p =(char*) &i;
//                        //将i的地址编号存放在p中
//	*(p + 1) = 9;
//	return 0;
//}



//int main()
//{
//	int i = 0x11223344;
//	short* p = (short*)&i;//我们使用一个char* 指针访问整形
//	*(p+1)=9;
//	return 0;
//}



//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *p); //打印结果可知 cha*p存放的任然是首地址 
//	printf("%s\n", p);
//	return 0;
//}


//int main()
//{
//	char a = 'a';
//	printf("%d", a);
//	char* p = &a;
//	return 0;
//}