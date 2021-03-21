 #define _CRT_SECURE_NO_WARNINGS
#include<string.h>

#include<stdio.h>
void replace(char a[], int length)//注意边界值
{
	if (a == NULL || length <= 0)
	{
		return;
	}
	int alllength = 0;
	int spacenum = 0;
	int i = 0;
	for (i = 0; i < length; i++)
	{
		if (a[i] == ' ')
			spacenum++;//空格数
	}
	alllength = length + spacenum * 2;//新的字符串长度
	while (length >= 0 && length < alllength)
	{
		if (a[length] == ' ')
		{
			a[alllength--] = '0';
			a[alllength--] = '2';
			a[alllength--] = '%';
		}
		else
			a[alllength--] = a[length];
		length--;
	}
}
int main()//替换空格
{
	char a[64] = "we are happy.";

	int i = 0;
	int length1, length = strlen(a);
	for (i = 0; i < length; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
	replace(a, length);
	length1 = strlen(a);
	for (i = 0; i < length1; i++)
	{
		printf("%c", a[i]);
	}
	
	return 0;
}


















//class Solution {
//public:
//    void replaceSpace(char* str, int length) {
//        if (str == NULL)
//        {
//            return ;
//        }
//        int spaceNum = 0;
//        int p1, p2;
//        int newlength = 0;
//        for (int i = 0; i < strlen(str); i++)
//        {
//            if (str[i] == '-')
//            {
//                spaceNum++;
//            }
//        }
//        newlength = strlen(str) + 2 * spaceNum;
//        if (newlength > length)
//        {
//           return ;
//        }
//        p2 = newlength;
//        p1 = strlen(str);
//        while (p1 < p2)
//        {
//            if (str[p1] == '-')
//            {
//                str[p2--] = '%';
//                str[p2--] = '0';
//                str[p2--] = '2';
//                p1--;
//            }
//            else
//            {
//                str[p2--] = str[p1--];
//            }
//
//        }
//    }
//};