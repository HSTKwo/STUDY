//#pragma warning(disable:4996)

//#include<stdio.h>
//#include<string.h>



			/**********************
			 *		 ð������     *
			 **********************/




//void bubble_sort(int arr[], int num)			//��ͨ
//{
//	int i, j, tem;
//	for (i = 0; i < num; i++)		//�Ե�һ��������ð��
//	{
//		for (j = 0; j < num - 1 - i; j++)	//ð�� num-1-i �ǹؼ� num-1����Ϊj+1Ҫð�ݵ������ڶ���
//		{									//num-1-i��-i����Ϊ����i���Ѿ�ð��
//			if (arr[j] > arr[j + 1])
//			{
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}


//�Ż�������bool ����Ѿ��ź�����Ҫ�ټ����ŵ����һ�Σ��Ż��Ƚ���

//void bubble_sort(int arr[], int num)
//{
//	int i, j, tem;
//	_Bool flag = 0;
//	for (i = 0; i < num; i++)		 
//	{
//		flag = 1;
//		for (j = 0; j < num - 1 - i; j++)	 
//		{									 
//			if (arr[j] > arr[j + 1])
//			{
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;
//			}
//		}
//		if (flag)
//			break;
//	}
//}


//�Ż� ��һ������ӽ������ʱ����������ֻ��Ҫ�� ĳһ��С��Χ�����򼴿ɣ�
//���ǿ�����һ����� index ����ʾ�����Χ������---������޾���ð�ݵ����λ��
//�ȽϺ�

//void bubble_sort(int arr[], int num)
//{
//	int i, j, tem;
//	_Bool flag = 0;
//	int index = num - 1;
//	int max_index = 0;		//��¼ÿһ�������ҵ����������Ͻ�
//	for (i = 0; i < num; i++)
//	{
//		flag = 1;
//
//		for (j = 0; j < index; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;
//				max_index = j;		//ע�ⲻҪ������ֱ�ӽ�index��Ϊj�������ƻ�ѭ��
//			}
//		}
//		if (flag)
//			break;
//		index = max_index;		//���������index��Ϊ���һ�ν��������꣬��û�����ʾ�Ѿ�����
//	}
//}

//����ĵ������Ż�����ǰ�����Ż��Ļ����Ͻ����������� ѡ�������˼��
//����û�з���ѡ�������ð������Ĵ����е����ƣ����������ǽ��е�����������ɨ�裬
//����ɨ��õ����ֵ�� ����ɨ��õ���Сֵ�����ߵߵ�˳�򣩣���������Ŀ����Ϊ��
//�����鱾���Ѿ��ӽ�����򲿷������ʱ�������жϣ���������ÿ�εõ���������
//���ֵ����Сֵֻ����������Ϳ����ˡ�
//�е㸴��

//void bubble_sort(int arr[], int num)
//{
//
//	_Bool flag = 0;
//	int index = num - 1;
//	int max_index = 0;		//��¼ÿһ�������ҵ����������Ͻ�
//	int min_index = 0;		//��¼ÿһ�������ҵ����������½�
//	int min_min_index = 0;
//	//�����ҵ����ֵ
//	for (int i = 0; i < num; i++)
//	{
//		flag = 1;
//	
//		for (int j = 0; j < index; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;
//				max_index = j;		//ע�ⲻҪ������ֱ�ӽ�index��Ϊj�������ƻ�ѭ��
//			}
//		}
//		if (flag)
//			break;
//		index = max_index;		//���������index��Ϊ���һ�ν��������꣬��û�����ʾ�Ѿ�����
//
//		//�����ҵ���Сֵ
//		for (int j = index; j >= min_index; j--)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = tem;
//				flag = 0;
//				min_min_index = j;
//			}
//		}
//		if (flag)
//			break;
//		min_index = min_min_index;
//	}
//}
//
//
//
//
//int main()
//{
//	int arr[] = { 1,2,7,5,4 ,0 };
//	int num = sizeof(arr)/sizeof(arr[0]);
//	int i;
//	bubble_sort(arr, num);
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}







			/**********************
			 *		 ��������     * 
			 **********************/

//˼�룺����

//  1. ȷ���ֽ��  ��˵㣬�Ҷ˵㣬�м�㣬�����
// *2. �������䣬ʹ��ζ�С�ڷֽ�㣬�Ҷζ����ڷֽ��   
//  3. �ݹ鴦����������

//�ڶ����ı�������������ʱʹ�ã� ���������飬ɨ��
// Ŀ������һ�ֽ��Ϊ����ֵ��������飬Ȼ���ڰ�С
//�ڷֽ����Ȳ��ȥ��

//�ڶ���������������������ָ��������ߣ���ָ������
//�ȷֽ����ֹͣ��ͬʱ��ָ�������ȷֽ��С��Ҳͣ
//ֹ�������ֹͣ��swapһ�£�Ȼ��������м�ɨ��



#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];

void quick_sort(int q[], int l, int r)
{
	if (l >= r) return;
	int x = q[l];					//�ֽ��
	int i = l - 1, j = r + 1;		//����ָ��

	while (i < j)
	{
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j)swap(q[i],q[j]);
	}
	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &q[i]);

	quick_sort(q, l, r);		//lΪ��˵㣬rΪ�ж˵㡣

	for (int i = 0; i < n; i++) printf("%d ", q[i]);

	return 0;
}












			/**********************
			 *		 �鲢����     *
			 **********************/


//˼�룺 ����



