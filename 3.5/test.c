 #define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<stdio.h>
#include<string.h>

void fun()
{
	char str[20] = { 0 };

	printf("������һ���ַ���:\n");
	scanf("%s", str);
	printf("������ַ����ǣ�%s\n", str);

	int len= strlen(str);
	printf("�ַ��������ǣ�%d\n\n", len);

	//ѭ�������ӡ�ַ���
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
//                        //��i�ĵ�ַ��Ŵ����p��
//	*(p + 1) = 9;
//	return 0;
//}



//int main()
//{
//	int i = 0x11223344;
//	short* p = (short*)&i;//����ʹ��һ��char* ָ���������
//	*(p+1)=9;
//	return 0;
//}



//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *p); //��ӡ�����֪ cha*p��ŵ���Ȼ���׵�ַ 
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