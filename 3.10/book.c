 #define _CRT_SECURE_NO_WARNINGS\

#include"book.h"
static int FindBook(struct BooKs* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->deat[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}


void InitBook(struct BooKs* pc)
{
	pc->sz = 0;
	memset(pc->deat, 0, sizeof(pc->deat));
}

void Add(struct BooKs* pc)
{
	if (pc->sz == books_Max)
	{
		printf("full!!!!");
	}
	else
	{
		pc->sz = pc->deat[pc->sz].number;
		printf("请输入书名\n");
		scanf("%s", pc->deat[pc->sz].name);
		printf("请输入价格\n");
		scanf("%d", &pc->deat[pc->sz].price);
		printf("请输入出版商\n");
		scanf("%s", pc->deat[pc->sz].publish);
		printf("请输入作者\n");
		scanf("%s", pc->deat[pc->sz].author);
		(pc->sz)++;
	}
}

void Show(struct BooKs* pc)
{
	int i = 0;
	printf("%15s\t%15s\t %15s\t %-25s\t%-15s\t\n","编号", "书名", "价格", "出版商", "作者");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%15d%15s%15d%25s%-15s\n", 
			pc->sz+1, 
			pc->deat[i].name, 
			pc->deat[i].price, 
			pc->deat[i].publish, 
			pc->deat[i].author);
	}
}

void Del(struct BooKs* pc)
{
	char name[Name_Max] = { 0 };
	if (pc->sz == 0)
	{
		printf("worring!");
	}
	else
	{
		pirntf("请输入你要查找的书名");
		scanf("%s", name);
		int ret=FindBook(pc,name);
		if (ret == -1)
		{
			printf("没有");
		}
		
		else
		{
			int j = 0;
			for (j = ret; j < pc->sz-1; j++)
			{
				pc->deat[j] = pc->deat[j + 1];
				
			}
			pc->sz--;
			printf("删除成功");
		}
	}
}
