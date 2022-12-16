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
////��ʼ��
//void StackInit(Stack* ps)
//{
//	ps->a = (StackDateType*)malloc(sizeof(Stack) * 4);
//	if (ps->a == NULL)
//	{
//		printf("Malloc fail\n");
//		exit(-1);
//	}
//	ps->capcity = 4;
//	ps->top = 0;			//top��ʼֵΪ0����ָ�����ջ��Ԫ�ص���һ����
//}
//
//
////����
//void StackDestory(Stack* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps = ps->top = 0;
//}
//
//
////��ջ
//void StackPush(Stack* ps, StackDateType v)
//{
//	//����
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
////��ջ
//void StackPop(Stack* ps)
//{
//	assert(ps);
//	//ջ����ֱ��ֹͣ
//	assert(ps->top > 0);
//	ps->top--;
//}
//
//
////����ջ������
//StackDateType StackTop(Stack* ps)
//{
//	assert(ps);
//	return ps->a[ps->top-1];
//}
//
//
////����ջ�Ĵ�С
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//
//
////�ж��Ƿ�Ϊ��
//_Bool StackEmpty(Stack* ps)
//{
//	return ps->top == 0;
//}
//
//
////ջ
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

