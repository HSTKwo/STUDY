			/**********************
			 *		  二分        *
			 **********************/


//整数   浮点


// 整数
//有单调性一定可以二分，没有单调性可能可以二分


//区间[l,r]被分成[l,mid]和[mid+1，r]使用	右边

//int bserch_1(int l, int r)
//{
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (check(mid)) r = mid;			//check()判断mid是否满足性质
//		else l = mid + 1;
//	}
//	return l;
//}


//区间[l,r]被分成[l,mid-1]和[mid，r]使用	左边

//int bserch_2(int l, int r)
//{
//	while (l < r)
//	{
//		int mid = l + r + 1 >> 1;			//l等于mid要补上加1
//		if (check(mid)) l = mid;			//check()判断mid是否满足性质
//		else r = mid - 1;
//	}
//	return l;
//}



//浮点数二分
//如开方

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	double x;
//	cin >> x;
//	double l = 0, r = x;
//	while (r - l > 1e-8)			//要比要求的精度多2
//	{
//		double mid = (l + r)/2;
//		if (mid * mid >= x) r = mid;
//		else l = mid;
//	}
//	printf("%lf\n", l);
//	return 0;
//}