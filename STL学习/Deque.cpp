#pragma warning(disable:4996)
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void print(const deque<int>& deq)
{
	for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//int main()
//{
	//deque构造函数

	//deque<int>d1;					//默认构造
	//for (int i = 1; i <= 10; i++)
	//{
		//d1.push_back(i);
	//}
	//print(d1);

	//deque<int>d2(d1.begin(), d1.end());		//位置拷贝
	//print(d2);

	//deque<int>d3(10, 100);					//10个100
	//print(d3);

	//deque<int>d4(d3);						//拷贝构造
	//print(d4);




	//赋值操作

	//d1 = d4;								//重载=操作符
	//print(d1);

	//d1.assign(d2.begin(), d2.end());		//区间拷贝
	//print(d1);

	//d1.assign(10, 100);					//n个elem；
	//print(d1);



	//大小操作

	//d1.resize(0);							//删除元素个数  没有容量，无限大
	//print(d1);

	//cout << d1.empty() << endl;				//判断是否为空

	//cout << d1.size() << endl;					//元素个数


	//d1.resize(10);
	//print(d1);

	//d1.resize(20, 1);						//默认值为1重载
	//print(d1);




	//插入和删除

	//d1.clear();								//清除

	//d1.push_front(10);						//头插
	//d1.push_back(20);							//尾插
	//print(d1);

	//d1.pop_front();							//头删
	//d1.pop_back();							//尾删
	//print(d1);

	//d1.insert(d1.begin()+1, 15);				//pos位置插一个elem
	//print(d1);

	//d1.insert(d1.begin() + 2, 2, 15);			//pos位置插n个elem
	//print(d1);

	//d1.insert(d1.begin()+1,d2.begin(),d2.end());	//从pos位置上插入区间
	//print(d1);

	//d1.erase(d1.begin() + 1);					//删除pos位置上的元素
	//print(d1);

	//d1.erase(d1.begin() + 1, d1.end() - 1);	//删除区间上的元素
	//print(d1);




	//deque数据存取
	
	//print(d1);
	//cout << d1.at(1) << endl;				  //idx表示坐标
	//cout << d1[8] << endl;
	//cout << d1.front() << endl;			  //第一个
	//cout << d1.back() << endl;			  //最后一个




	//deque排序


	//d1.push_back(7);
	//d1.push_front(9);
	//d1.push_back(3);
	//print(d1);
	//sort(d1.begin(), d1.end());				//头文件algorithm，默认从小到大
	//cout << "排序后" << endl;
	//print(d1);


//}