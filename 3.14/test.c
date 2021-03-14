 #define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* My_strstr(char* p, char* r)
//{
//	int i = 0;
//	int k = 0;
//	while (*p != '\0')
//	{
//		if (*p == *r)
//		{
//			r++;
//			i++;
//			p++;
//			
//		}
//		else if (*r == '\0')
//		{
//			return p - k;
//		}
//		else 
//		{
//			p++;
//			k++;
//		}
//	}
//	if (*p == '\0')
//	{
//		return p - i;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[20] = "bcdefg";
//	char* p = My_strstr(arr1, arr2);
//	printf(p);
//
//	if (p == NULL)
//	{
//		printf("heh");
//	}
//	return 0;
//}
//
//
//







//int My_strlen(char* p)
//{
//	if (*p == '\0')
//	{
//		return 0;   // 出口
//	}
//	return 1+My_strlen(p+1);
//}





//int main()
//{
//	char arr[] = "abcd";
//	int len = My_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//int My_strlen(char* p)
//{
//	int i = 0;
//	while (*p != '\0')
//	{
//		p++;
//		i++;
//	}
// 	return i;
//}


//char* My_strcpy(char* r, char* p)
//{
//	int c = 0;
//	while (*p != '\0')
//	{
//		*r = *p;
//			p++;
//		r++;
//		c++;
//	}
//	return r - c;
//}
//
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[20] = { 0 };
//	 char*p=My_strcpy(arr2, arr1);
//	//My_strcpy(arr2, arr1);
//	printf(arr2);
//	printf("\n");
//	printf(p);
//	return 0;
//}
//












//int My_strcmp(const char* p, const char* r)
//{
//	assert ((*p != NULL) && (*r != NULL));
//	while (*p == *r)
//	{
//		if (*p == '\0')
//		{
//			return 0;
//		}
//		p++;
//		r++;
//	}
//	return *p - *r;
//}
//
//
//
//
//int main()
//{
//	char arr[20] = "abc";
//	char arr2[20] = "abcd";
//	if ((My_strcmp(arr, arr2))==0)
//	{
//		printf("oppen");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}
//

//int My_strcmp(char* p, char* r)
//{
//	int i = 0;
//	int j = 0;
//	int b = 0;
//	sserat((*p != NULL) && (*r != NULL));
//	while (*(p + i) == '\0')
//	{
//		i++;
//	}
//	while (*(p + i) == '\0')
//	{
//		j++;
//	}
//	if (i != j)
//	{
//		return i - j;
//	}
//	else
//	{
//		for (int a = 0; a < i; a++)
//		{
//				if (*(p + a) != *(r + a))
//				{
//					return 0;
//				}
//			
//		}
//		return 1;
//	}
//}





//int main()
//{
//	char arr[20] = "adc";
//	char arr2[20] = { 0 };
//
//	scanf("%s", arr2);
//	if (!(strcmp(arr, arr2)))
//	{
//		printf("oppen");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}








//char* My_strchr(char* p, int k)
//{
//	while (*p != '\0')
//	{
//		if (*p == k)
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr[20] = "abcdef";
//	int ch = 'd';
//	char * pr = My_strchr(arr, ch);
//	printf(pr);
//	return 0;
//}





//int main()
//{
//	char arr[20] = "abcdef";
//	int ch = 'b';
//	char* pr = strchr(arr, ch);
//	printf("%p\n", *pr);
//	printf(pr);
//	return 0;
//}




//char* My_strcat(char* p, char* r)
//{
//	int i = 0;
//	while (*p != '\0')
//	{
//		p++;
//		i++;
//	}
//	int j = 0;
//	char tmp = 0;
//	while (*r != '\0')
//	{
//		*p = *r;
//		p++;
//		r++;
//		i++;    // 计数器i 得知指针p移动的距离 在退回去
//	}
//
//	return p-i;
//}
//
//
//int main()
//{
//	char arr1[20] = "ab cd";  // arr 容量不可少
//	char arr2[20] = "ef0ko";
//	
//	char* pr=My_strcat(arr1,arr2);
//	printf(pr);
//	return 0;
//}





//int main()
//{
//	char arr1[20] ="abcd";
//	char arr2[20] ="efdg";
//	char* pr = NULL;
//
//	pr = strcat(arr1, arr2);
//	// 返回一个char*指针
//	printf( "%s\n",pr);
//	puts(pr);
//	return 0;
//}