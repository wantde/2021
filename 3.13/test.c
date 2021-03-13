 #define _CRT_SECURE_NO_WARNINGS

#include<ctype.h>
#include<stdio.h>
#include<string.h>

int My__touPper(int x)
{
	if((x>='a')&&(x<='z'))
	{
		return  x - 32;
	}
	else
	{
		return 0;
	}
}


int main()
{
	int i = 112;
	int ret= My__touPper(i); // 是小写则返回大写 否则返回0
	printf("%c", ret);
	return 0;
}


//int My_islower(int x)
//{
//
//	if ((x >= 'a') && (x <= 'z'))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0 ;
//	}
//}
//int main()
//{
//	int i = 48; //i属于[97,122] 为真 返回1
//
//	if (My_islower(i))
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}






//int main()
//{
//	int i = 48;
//	 
//	if (isxdigit(i))
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}


//int My_isalNum(int const x)
//{
//	if (('0' <= x)&&(x <= '9') || ('A' <= x) &&(x<= 'Z') || ('a' <= x)&&(x <= 'z')){
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//		
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int ret=My_isalNum(input);
//	if (ret == 1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}



//int main()
//{
//	char ch[] = "abcd!1234";
//	int sz = strlen(ch);
//	int k = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (isalnum(ch[i]))
//		{
//			k++;
//		}
//	}
//	printf("%d", k);
//	return 0  ;
//}