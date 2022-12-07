#pragma warning(disable:4996)

#include<iostream>
#include<string>
#include<vector>
using namespace std;


void print(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{

	//构造

	vector<int> v1;
	//for (int i = 1; i <= 10; )
	//{
	//	v1.push_back(i++);
	//}
	//print(v1);

	vector<int>v2(v1.begin(), v1.end());
	//print(v2);

	vector<int>v3(v2);
	//print(v3);

	vector<int>v4(10, 100);
	//print(v4);




	//赋值

	//v1 = v4;												//封装了=的重载

	//v2.assign(v1.begin(), v1.end());

	//v3.assign(10, 100);




	//容量和大小

	//cout <<"v1是否为空"<< v1.empty() << endl;				//空 返回1；否则 返回0

	//cout <<"v1的容量"<<v1.capacity() << endl;				//不是内存大小，容量大于等于元素个数，会多开辟内存。

	//cout <<"v1的元素个数"<<v1.size() << endl;				//

	//v1.resize(15);										//resize大小为15，而不是再增加15个，默认值为0，填充新增加的5个

	//v1.resize(15,10);										//默认值为10；

	//v1.resize(0);

	//cout << v1.empty() << endl;




	//vector插入和删除

	//v1.clear();

	//v1.push_back(10);
	//v1.push_back(20);
	//v1.push_back(30);
	//v1.push_back(40);
	//v1.push_back(50);

	//v1.pop_back();

	//v1.insert(v1.begin(), 0);								//插入不是替换

	//v1.insert(v1.begin(),2, 0);							//插入2个0

	//v1.erase(v1.begin() + 1);							

	//v1.erase(v1.begin(), v1.end() - 1);					





	//vector数据存取

	//cout << v1.at(5) << endl;

	//cout << v1[5] << endl;

	//cout << v1.front() << endl;

	//cout << v1.back() << endl;





	//vector互换容器						

	//print(v1);
	//print(v4);
	//v1.swap(v4);
	//print(v1);
	//print(v4);
																//巧用swap可以收缩内存
	//cout << "v1的容量       " << v1.capacity() << endl;
	//cout << "v1的元素个数   " << v1.size() << endl << endl;
	//v1.resize(5);
	//cout << "v1的容量       " << v1.capacity() << endl;
	//cout << "v1的元素个数   " << v1.size() << endl << endl;
	//vector<int>(v1).swap(v1);									//收缩内存
	//cout << "v1的容量       " << v1.capacity() << endl;
	//cout << "v1的元素个数   " << v1.size() << endl << endl;




	//vector预留空间

	//int count = 0;		//统计开辟的次数
	//int* p1= NULL;
	//for (int i = 0; i < 100000; i++)
	//{
	//	v1.push_back(i);


	//	if (p1 != &v1[0])
	//	{
	//		p1 = &v1[0];
	//		count++;
	//	}
	//}
	//cout << "开辟的次数    " << count << endl;


	//vector<int>v1;
	//v1.reserve(100000);
	//int count = 0;		//统计开辟的次数
	//int* p2 = NULL;
	//for (int i = 0; i < 100000; i++)
	//{
	//	v1.push_back(i);


	//	if (p2 != &v1[0])
	//	{
	//		p2 = &v1[0];
	//		count++;
	//	}
	//}
	//cout << "开辟的次数    " << count << endl;
