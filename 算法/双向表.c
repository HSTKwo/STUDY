//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef int ListDateType;
//
//typedef struct ListNode
//{
//	struct ListNode* prev;
//	ListDateType Date;
//	struct ListNode* next;
//}ListNode;
//
//
////扩容
//ListNode* CreatListNode(ListDateType v)
//{
//	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
//	newnode->Date = v;
//	newnode->prev = NULL;
//	newnode->next = NULL;
//	return newnode;
//}
//
//
////初始化
//ListNode* ListInit()
//{
//	ListNode* newnode = CreatListNode(0);
//	newnode->prev = newnode;
//	newnode->next = newnode;
//	return newnode;
//}
//
//
////销毁
//void ListDestroy(ListNode* phead)
//{
//	ListNode* cur = phead->next;
//	while (cur != phead)
//	{
//		ListNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	free(phead);
//	phead = NULL;
//}
//
//
////打印函数
//void Print(ListNode* phead)
//{
//	ListNode* cur = phead->next;
//	while (cur != phead)
//	{
//		printf("%d ", cur->Date);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//
//
////随机插入
//void ListInsert(ListNode* pos, ListDateType v)
//{
//	ListNode* newnode = CreatListNode(v);
//	ListNode* prev = pos->prev;
//	prev->next = newnode;
//	newnode->prev = prev;
//	newnode->next = pos;
//	pos->prev = newnode;
//}
//
//
////随机删除
//void ListErase(ListNode* pos)
//{
//	ListNode* prev = pos->prev;
//	ListNode* next = pos->next;
//	free(pos);
//	pos = NULL;
//	prev->next = next;
//	next->prev = prev;
//}
//
//
////尾插
//void ListPush_back(ListNode* phead, ListDateType v)
//{
//	//常规实现
//
//	//assert(phead);
//	//ListNode* tail = phead->prev;
//	//ListNode* newnode = CreatListNode(v);
//	//tail->next = newnode;
//	//newnode->prev = tail;
//	//newnode->next = phead;
//	//phead->prev = newnode;
//
//
//	//快速实现
//	assert(phead);
//	ListInsert(phead, v);
//
//}
//
//
////尾删
//void ListPop_back(ListNode *phead)
//{
//	//常规实现
//	//assert(phead);
//	//assert(phead->next != phead);
//	//ListNode* end = phead->prev;
//	//ListNode* back = end->prev;
//	//back->next = phead;
//	//phead->prev = back;
//	//free(end);
//	//end = NULL;
//
//
//	//快速实现
//	assert(phead);
//	assert(phead->next != phead);
//	ListErase(phead->prev);
//
//}
//
//
////头插
//void ListPush_front(ListNode* phead, ListDateType v)
//{
//	//常规实现
//
//	//ListNode* newnode = CreatListNode(v);
//	//ListNode* next = phead->next;
//
//	//phead->next = newnode;
//	//newnode->prev =phead;
//	//next->prev = newnode;
//	//newnode->next = next;
//
//	//快速实现
//
//	ListInsert(phead->next, v);
//
//}
//
//
////头删
//void ListPop_front(ListNode* phead)
//{
//	//常规实现
//
//	//assert(phead);
//	//assert(phead->next != phead);
//	//ListNode* first = phead->next;
//	//ListNode* second = first->next;
//	//phead->next = second;
//	//second->prev = phead;
//	//free(first);
//	//first = NULL;
//
//
//	//快速实现
//	assert(phead);
//	assert(phead->next != phead);
//	ListErase(phead->next);
//}
//
//
////查找
//ListNode* ListFind(ListNode* phead, ListDateType v)
//{
//	ListNode* cur = phead->next;
//	while (cur != phead)
//	{
//		if (cur->Date == v)
//		{
//			return cur;
//		}
//		cur = cur->next;
//	}
//	return NULL;
//}



//双向带头循环链表
//int main()
//{
//	ListNode* phead=ListInit();
//
//	ListPush_back(phead, 3);
//	ListPush_back(phead, 4);
//
//	ListPush_front(phead, 2);
//	ListPush_front(phead, 1);
//	
//	ListPop_front(phead);
//	ListPop_front(phead);
//
//	ListPop_back(phead);
//	ListPop_back(phead);
//
//	ListNode* pos = ListFind(phead, 3);
//
//	ListInsert(pos, 3);
//	ListErase(pos);
//
//	Print(phead);
//
//	ListDestroy(phead);
//
//}
