//#pragma warning(disable:4996)
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef int QueueDateType;
//
//typedef struct QueueNode
//{
//	QueueDateType date;
//	struct Queue* next;
//}QNode;
//
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//}Queue;
//
//
////初始化
//void QueueInit(Queue* q)
//{
//	assert(q);
//	q->head = q->tail = NULL;
//}
//
//
////销毁
//void QueueDestory(Queue* q)
//{
//	assert(q);
//	QNode* cur = q->head;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	q->head = q->tail = NULL;
//}
//
//
////入队   队尾入
//void QueuePush(Queue* q, QueueDateType v)
//{
//	assert(q);
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL)
//	{
//		printf("Malloc Fail\n");
//		exit(-1);
//	}
//	newnode->date = v;
//	newnode->next = NULL;
//
//	if (q->tail == NULL)
//	{
//		q->head = q->tail = newnode;
//	}
//	else
//	{
//		q->tail->next = newnode;
//		q->tail = newnode;
//	}
//}
//
//
////出队   队头出
//void QueuePop(Queue* q)
//{
//	assert(q);
//	assert(q->head);
//	if (q->tail->next=NULL)
//	{
//		free(q->head);
//		q->head = q->tail = NULL;
//	}
//	else
//	{
//		QNode* next = q->head->next;
//		free(q->head);
//		q->head = next;
//	}
//}
//
//
////取两端数据
//QueueDateType QueueFront(Queue* q)
//{
//	assert(q);
//	assert(q->head);
//	return q->head->date;
//}
//
//QueueDateType QueueBack(Queue* q)
//{
//	assert(q);
//	assert(q->tail);
//	return q->tail->date;
//}
//
//
////返回元素个数
//int QueueSize(Queue* q)
//{
//	assert(q);
//	int size = 0;
//	QNode* cur = q->head;
//	while (cur)
//	{
//		size++;
//		cur = cur->next;
//	}
//	return size;
//}
//
//
////判断是否为空
//_Bool QueueEmpty(Queue* q)
//{
//	assert(q);
//	return q->head == NULL;
//}
//
//
//
//int main()
//{
//	Queue a;
//	QueueInit(&a);
//
//	QueuePush(&a, 1);
//	QueuePush(&a, 2);
//	QueuePush(&a, 3);
//	QueuePush(&a, 4);
//	QueuePush(&a, 5);
//
//	while (!QueueEmpty(&a))
//	{
//		printf("%d ", QueueFront(&a));
//		QueuePop(&a);
//	}
//
//	QueueDestory(&a);
//	return 0;
//}
