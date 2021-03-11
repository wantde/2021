#define Name_Max  20
#define Publish_Max 50
#define Author_Max  50
#define books_Max  10

#include<stdio.h>
#include<string.h>

void InitBook(struct BooKs*pc);
void Add(struct BooKs* pc);
void Show(struct BooKs* pc);
void Del(struct BooKs* pc);
enum chose
{
excit,
add,
del,
serch,
amend,
show
};
struct BooK
{
	int number;
	char name[Name_Max];
	int price;
	char publish[Publish_Max];
	char author[Author_Max];

};

struct BooKs
{
	struct BooK deat[books_Max];
	int sz;
};