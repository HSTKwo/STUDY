			/**********************
			 *		  ����        *
			 **********************/


//����   ����


// ����
//�е�����һ�����Զ��֣�û�е����Կ��ܿ��Զ���


//����[l,r]���ֳ�[l,mid]��[mid+1��r]ʹ��	�ұ�

//int bserch_1(int l, int r)
//{
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (check(mid)) r = mid;			//check()�ж�mid�Ƿ���������
//		else l = mid + 1;
//	}
//	return l;
//}


//����[l,r]���ֳ�[l,mid-1]��[mid��r]ʹ��	���

//int bserch_2(int l, int r)
//{
//	while (l < r)
//	{
//		int mid = l + r + 1 >> 1;			//l����midҪ���ϼ�1
//		if (check(mid)) l = mid;			//check()�ж�mid�Ƿ���������
//		else r = mid - 1;
//	}
//	return l;
//}



//����������
//�翪��

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	double x;
//	cin >> x;
//	double l = 0, r = x;
//	while (r - l > 1e-8)			//Ҫ��Ҫ��ľ��ȶ�2
//	{
//		double mid = (l + r)/2;
//		if (mid * mid >= x) r = mid;
//		else l = mid;
//	}
//	printf("%lf\n", l);
//	return 0;
//}