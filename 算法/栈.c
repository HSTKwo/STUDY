//#pragma warning(disable:4996)

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//
//typedef int StackDateType;
//
//typedef struct Stack
//{
//	StackDateType* a;
//	int top;
//	int capcity;
//}Stack;
//
//
////初始化
//void StackInit(Stack* ps)
//{
//	ps->a = (StackDateType*)malloc(sizeof(Stack) * 4);
//	if (ps->a == NULL)
//	{
//		printf("Malloc fail\n");
//		exit(-1);
//	}
//	ps->capcity = 4;
//	ps->top = 0;			//top初始值为0，则指向的是栈顶元素的下一个。
//}
//
//
////销毁
//void StackDestory(Stack* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps = ps->top = 0;
//}
//
//
////入栈
//void StackPush(Stack* ps, StackDateType v)
//{
//	//扩容
//	if (ps->top == ps->capcity)
//	{
//		StackDateType* tmp = (StackDateType*)realloc(ps->a, (ps->capcity) * 2 * sizeof(Stack));
//		if (tmp == NULL)
//		{
//			printf("Ralloc fail\n");
//			exit(-1);
//		}
//		else
//		{
//			ps->a = tmp;
//			ps->capcity *= 2;
//		}
//	}
//	assert(ps);
//	ps->a[ps->top] = v;
//	ps->top++;
//}
//
//
////出栈
//void StackPop(Stack* ps)
//{
//	assert(ps);
//	//栈空了直接停止
//	assert(ps->top > 0);
//	ps->top--;
//}
//
//
////返回栈顶数据
//StackDateType StackTop(Stack* ps)
//{
//	assert(ps);
//	return ps->a[ps->top-1];
//}
//
//
////返回栈的大小
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//
//
////判断是否为空
//_Bool StackEmpty(Stack* ps)
//{
//	return ps->top == 0;
//}
//
//
////栈
//int main()
//{
//	Stack a;
//	StackInit(&a);
//
//	StackPush(&a, 1);
//	StackPush(&a, 2);
//	StackPush(&a, 3);
//	StackPush(&a, 4);
//	StackPush(&a, 5);
//
//	printf("%d\n", StackTop(&a));
//
//	printf("%d\n", StackSize(&a));
//
//	printf("%d\n", StackEmpty(&a));
//
//	StackDestory(&a);
//
//	return 0;
//}

