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
////��ӡ����
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
////����ڵ�
//SLTNode* SLTCreatNode(SLTDataType v)
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	newnode->data = v;
//	newnode->next = NULL;
//	return newnode;
//}
//
//
////β�庯��
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
//		//��β�ڵ�
//		SLTNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//
//		//β�ڵ������½ڵ�
//		tail->next = newnode;
//	}
//}
//
//
////βɾ����
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
////ͷ�庯��
//void SLTPush_front(SLTNode** pphaed, SLTDataType v)
//{
//	SLTNode* newnode = SLTCreatNode(v);
//	newnode->next = *pphaed;
//	*pphaed = newnode;
//}
//
//
////ͷɾ����
//void SLTPop_front(SLTNode** pphaed)
//{
//	assert(*pphaed != NULL);
//	SLTNode* tem = (*pphaed)->next;
//	free(*pphaed);
//	(*pphaed) = tem;
//}
//
//
////�������
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
////���ɾ��
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
////����
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


//������
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
