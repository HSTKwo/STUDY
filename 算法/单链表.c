//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//
//typedef int SLTDataType;
//
//typedef struct SListNode
//{
//	SLTDataType data;
//	struct SListNode* next;
//
//}SLTNode;
//
//
////打印函数
//void SLTPrint(SLTNode* phead)
//{
//	SLTNode* cur = phead;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//
//
////创造节点
//SLTNode* SLTCreatNode(SLTDataType v)
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	newnode->data = v;
//	newnode->next = NULL;
//	return newnode;
//}
//
//
////尾插函数
//void SLTPush_back(SLTNode** pphead, SLTDataType v)
//{
//	SLTNode* newnode = SLTCreatNode(v);
//
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		//找尾节点
//		SLTNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//
//		//尾节点链接新节点
//		tail->next = newnode;
//	}
//}
//
//
////尾删函数
//void SLTPop_back(SLTNode** pphaed)
//{
//	if (*pphaed == NULL)
//	{
//		return;
//	}
//	else if ((*pphaed)->next == NULL)
//	{
//		free(*pphaed);
//		*pphaed = NULL;
//	}
//	else
//	{
//		SLTNode* back = NULL;
//		SLTNode* end = *pphaed;
//		while (end->next != NULL)
//		{
//			back = end;
//			end = end->next;
//		}
//		free(end);
//		back->next = NULL;
//	}
//}
//
//
////头插函数
//void SLTPush_front(SLTNode** pphaed, SLTDataType v)
//{
//	SLTNode* newnode = SLTCreatNode(v);
//	newnode->next = *pphaed;
//	*pphaed = newnode;
//}
//
//
////头删函数
//void SLTPop_front(SLTNode** pphaed)
//{
//	assert(*pphaed != NULL);
//	SLTNode* tem = (*pphaed)->next;
//	free(*pphaed);
//	(*pphaed) = tem;
//}
//
//
////随机插入
//void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType v)
//{
//	if (pos == *pphead)
//	{
//		SLTPush_front(pphead, v);
//	}
//	else
//	{
//		SLTNode* newnode = SLTCreatNode(v);
//		SLTNode* cur = *pphead;
//		while (cur->next != pos)
//		{
//			cur = cur->next;
//		}
//		cur->next = newnode;
//		newnode->next = pos;
//	}
//}
//
//
////随机删除
//void SLTErase(SLTNode** pphead, SLTNode* pos)
//{
//	if (pos == *pphead)
//	{
//		SLTPop_front(pphead);
//	}
//	else
//	{
//		SLTNode* cur = *pphead;
//		while (cur->next != pos)
//		{
//			cur = cur->next;
//		}
//		cur->next = pos->next;
//		free(pos);
//	}
//}
//
//
////查找
//SLTNode* SLTFind(SLTNode* phead,SLTDataType v)
//{
//	SLTNode* cur = phead;
//	while (cur)
//	{
//		if (cur->data == v)
//		{
//			return cur;
//		}
//		else
//		{
//			cur = cur->next;
//		}
//	}
//	return NULL;
//}


//单链表
//int main()
//{
	//SLTNode* phead = NULL;
	//SLTPush_back(&phead, 2);
	//SLTPush_back(&phead, 3);
	//SLTPush_back(&phead, 4);

	//SLTPush_front(&phead, 1);

	//SLTPop_front(&phead);

	//SLTPop_back(&phead);

	//SLTNode* pos = SLTFind(phead, 1);
	//printf("%d\n", (*pos).data);

	//SLTInsert(&phead, pos, 2);

	//SLTErase(&phead, pos);

	//SLTPrint(phead);

//}
