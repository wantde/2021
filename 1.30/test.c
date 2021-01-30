#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short a = 2;
	printf("%d ", a);
	int b=a >> 1;
	printf("%d", b);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define MAX 9
//������¼�Ľṹ��
typedef struct {
    int key;
}SqNote;
//��¼��Ľṹ��
typedef struct {
    SqNote r[MAX];
    int length;
}SqList;
//����������¼��λ��
void swap(SqNote* a, SqNote* b) {
    int key = a->key;
    a->key = b->key;
    b->key = key;
}
//���ұ��йؼ��ֵ���Сֵ
int SelectMinKey(SqList* L, int i) {
    int min = i;
    //���±�Ϊ i+1 ��ʼ��һֱ���������һ���ؼ��֣��ҵ���Сֵ���ڵ�λ��
    while (i + 1 < L->length) {
        if (L->r[min].key > L->r[i + 1].key) {
            min = i + 1;
        }
        i++;
    }
    return min;
}
//��ѡ�������㷨ʵ�ֺ���
void SelectSort(SqList* L) {
    for (int i = 0; i < L->length; i++) {
        //���ҵ� i ��λ����Ҫ���õ���Сֵ��λ��
        int j = SelectMinKey(L, i);
        //��� j �� i ����ȣ�˵����Сֵ�����±�Ϊ i ��λ�ã���Ҫ����
        if (i != j) {
            swap(&(L->r[i]), &(L->r[j]));
        }
    }
}
int main() {
    SqList* L = (SqList*)malloc(sizeof(SqList));
    L->length = 8;
    L->r[0].key = 49;
    L->r[1].key = 38;
    L->r[2].key = 65;
    L->r[3].key = 97;
    L->r[4].key = 76;
    L->r[5].key = 13;
    L->r[6].key = 27;
    L->r[7].key = 49;
    SelectSort(L);
    for (int i = 0; i < L->length; i++) {
        printf("%d ", L->r[i].key);
    }
    return 0;
}
