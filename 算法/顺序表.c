#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//typedef int seqlistType;
//
//typedef struct seqlist
//{
//	seqlistType* p;
//	int size;
//	int capacity;
//}SL;
//
////初始化
//void initSeqlist(SL* sl)
//{
//	sl->p = NULL;
//	sl->size = 0;
//	sl->capacity = 0;
//}
//
////扩容
//void checkSeqlistCapacity(SL* sl)
//{
//	int newCapcity = sl->capacity == 0 ? 4 : sl->capacity * 2;
//	if (sl->size == sl->capacity)
//	{
//		seqlistType* tem = (seqlistType*)realloc(sl->p, newCapcity * sizeof(seqlistType));
//		if (tem == NULL)
//		{
//			printf("Memory Full");
//			return;
//		}
//		else
//		{
//			sl->p = tem;
//			sl->capacity = newCapcity;
//		}
//	}
//}
//
////输出函数
//void Print(SL* sl)
//{
//	for (int i = 0; i < sl->size; i++)
//	{
//		printf("%d ", sl->p[i]);
//	}
//	printf("\n");
//}
//
////尾插
//void seqlistPush_back(SL* sl, seqlistType v)
//{
//	checkSeqlistCapacity(sl);
//	sl->p[sl->size] = v;
//	sl->size++;
//}
//
////尾删
//void seqlistPop_back(SL* sl)
//{
//	assert(sl->size > 0);
//	sl->size--;
//}
//
////头插
//void seqlistPush_front(SL* sl, seqlistType v)
//{
//	checkSeqlistCapacity(sl);
//	int end = sl->size - 1;
//	while (end >= 0)
//	{
//		sl->p[end + 1] = sl->p[end];
//		end--;
//	}
//	sl->p[0] = v;
//	sl->size++;
//}
//
////头删
//seqlistPop_front(SL* sl)
//{
//	assert(sl->size >= 0);
//	int start = 1;
//	while (start <= sl->size)
//	{
//		sl->p[start - 1] = sl->p[start];
//		start++;
//	}
//	sl->size--;
//}
//
////随机插入
//void seqlistInsert(SL* sl, int pos, seqlistType v)
//{
//	checkSeqlistCapacity(sl);
//	int end = sl->size;
//	while (pos <= end)
//	{
//		sl->p[end] = sl->p[end - 1];
//		end--;
//	}
//	sl->p[pos] = v;
//	sl->size++;
//}
//
////随机删除
//void seqliseErase(SL* sl, int pos)
//{
//	assert(sl->size >= 0);
//	while (pos < sl->size)
//	{
//		sl->p[pos] = sl->p[pos + 1];
//		pos++;
//	}
//	sl->size--;
//}
//
////释放列表
//void seqlistDestory(SL* sl)
//{
//	free(sl->p);
//	sl->p = NULL;
//	sl->capacity = 0;
//	sl->size = 0;
//}
//
////查找
//int seqlistFind(SL* sl, seqlistType v)
//{
//	for (int i = 0; i < sl->size; i++)
//	{
//		if (sl->p[i] == v)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
////修改
//void seqlistModity(SL* sl, int pos, seqlistType v)
//{
//	assert(pos < sl->size);
//	sl->p[pos] = v;
//}

//顺序表——seqlist  静态和动态
//实现尾插 尾删 头插 头删 随机插入 随机删除 销毁 查找 修改


//int main()
//{
	//SL list;
	//initSeqlist(&list);

	//seqlistPush_back(&list, 1);
	//seqlistPush_back(&list, 2);
	//seqlistPush_back(&list, 3);
	//seqlistPush_back(&list, 4);
	//seqlistPush_back(&list, 5);
	//Print(&list);

	//seqlistPop_back(&list);
	//Print(&list);

	//seqlistPush_front(&list, 0);
	//Print(&list);

	//seqlistPop_front(&list);
	//Print(&list);

	//seqlistInsert(&list, 1, 15);
	//Print(&list);

	//seqliseErase(&list, 1);
	//Print(&list);

	//seqlistDestory(&list);
	//Print(&list);

	//int ret = seqlistFind(&list, 3);
	//printf("%d\n",ret);

	//seqlistModity(&list, 3, 2);
	//Print(&list);

//}