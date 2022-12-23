//#pragma warning(disable:4996)

//#include<stdio.h>
//#include<string.h>



			/**********************
			 *		 冒泡排序     *
			 **********************/




//void bubble_sort(int arr[], int num)			//普通
//{
//	int i, j, tem;
//	for (i = 0; i < num; i++)		//对第一个数进行冒泡
//	{
//		for (j = 0; j < num - 1 - i; j++)	//冒泡 num-1-i 是关键 num-1是因为j+1要冒泡到倒数第二个
//		{									//num-1-i在-i是因为最后的i个已经冒完
//			if (arr[j] > arr[j + 1])
//			{
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}


//优化，加入bool 如果已经排好则不需要再继续排到最后一次，优化比较拉

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


//优化 当一个数组接近有序的时候我们往往只需要在 某一个小范围内排序即可，
//我们可以用一个标记 index 来表示这个范围的下限---这个下限就是冒泡的最后位置
//比较好

//void bubble_sort(int arr[], int num)
//{
//	int i, j, tem;
//	_Bool flag = 0;
//	int index = num - 1;
//	int max_index = 0;		//记录每一次我们找到无序区的上界
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
//				max_index = j;		//注意不要在这里直接将index置为j，会让破坏循环
//			}
//		}
//		if (flag)
//			break;
//		index = max_index;		//若排序过则将index置为最后一次交换的坐标，若没有则表示已经有序
//	}
//}

//这里的第三种优化是在前两种优化的基础上借用了类似于 选择排序的思想
//（有没有发现选择排序和冒泡排序的代码有点相似），但是我们进行的是正反交替扫描，
//正着扫描得到最大值， 反着扫描得到最小值（或者颠倒顺序），这样做的目的是为了
//当数组本身已经接近有序或部分有序的时候多余的判断，这样我们每次得到无序区的
//最大值和最小值只对它们排序就可以了。
//有点复杂

//void bubble_sort(int arr[], int num)
//{
//
//	_Bool flag = 0;
//	int index = num - 1;
//	int max_index = 0;		//记录每一次我们找到无序区的上界
//	int min_index = 0;		//记录每一次我们找到无序区的下界
//	int min_min_index = 0;
//	//正序找到最大值
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
//				max_index = j;		//注意不要在这里直接将index置为j，会让破坏循环
//			}
//		}
//		if (flag)
//			break;
//		index = max_index;		//若排序过则将index置为最后一次交换的坐标，若没有则表示已经有序
//
//		//倒序找到最小值
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
			 *		 快速排序     * 
			 **********************/

//思想：分治

//  1. 确定分界点  左端点，右端点，中间点，随机点
// *2. 调整区间，使左段都小于分界点，右段都大于分界点   
//  3. 递归处理左右两段

//第二步的暴力做法（忘记时使用） 开两个数组，扫描
// 目标数组一分界点为区间分到两个数组，然后在把小
//于分界点的先插回去。

//第二部的优美做法（）两个指针从两端走，左指针遇到
//比分界点大就停止，同时右指针遇到比分界点小的也停
//止，如果都停止则swap一下，然后继续向中间扫描



#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];

void quick_sort(int q[], int l, int r)
{
	if (l >= r) return;
	int x = q[l];					//分界点
	int i = l - 1, j = r + 1;		//两个指针

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

	quick_sort(q, l, r);		//l为左端点，r为有端点。

	for (int i = 0; i < n; i++) printf("%d ", q[i]);

	return 0;
}












			/**********************
			 *		 归并排序     *
			 **********************/


//思想： 分治



