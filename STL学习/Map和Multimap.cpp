#pragma warning(disable:4996)
#include<iostream>
#include<map>
using namespace std;

void print(map<int, int>& mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "键值(key)  " << (*it).first << "  实值(value)  " << (*it).second << endl;
	}
	cout << endl;
}

class map_cmp
{
public:
	bool  operator()(int v1, int v2)const
	{
		//按照key值排序
		return v1 > v2;
	}
};

int main()
{
	//构造函数

	map<int,int>m1;						//默认构造
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	m1.insert(pair<int, int>(5, 50));
	//print(m1);
	
	map<int, int>m2(m1);				//拷贝构造
	//print(m2);

	map<int, int>m3;					//重载等号操作符赋值
	m3 = m2;
	//print(m3);

	map<int, int>m4;



	////大小和交换

	//cout << m1.empty() << endl;			//判断容器是否为空

	//cout << m1.size() << endl;			//返回容器元素个数

	//print(m1);							//容器交互换
	//m4.insert(pair<int, int>(1, 60));
	//m4.insert(pair<int, int>(2, 70));
	//m4.insert(pair<int, int>(3, 80));
	//m4.insert(pair<int, int>(4, 90));
	//m4.insert(pair<int, int>(5, 100));
	//m1.swap(m4);
	//print(m1);
	//print(m4);



	////插入和删除

	//m1.clear();									//清空
	//print(m1);
	//
	//m4.insert(pair<int, int>(1, 60));			//插入,有四种
	//m4.insert(make_pair(2 ,70));
	//m4.insert(map<int,int>::value_type(3, 80));
	//m4[4] = 90;									//不建议，用于key访问value。
	//cout << m4[3] << endl;						//一般这样用
	//cout << m4[5] << endl;						//因为插错了会让实值默认为0
	//print(m4);

	//m4.erase(--m4.end());						//删除pos位置上的数据
	//print(m4);

	//m4.erase(2);								//重载，将key值为2的删除
	//print(m4);

	//m4.erase(m4.begin(), m4.end());				//删除区间 [beg,end) 区间的元素
	//print(m4);



	////查找和统计

	//map<int, int>::iterator pos = m1.find(2);	//查找 键值(key) 为2的元素,返回 迭代器 
	//if (pos != m1.end())
	//{
	//	cout << "找到元素  key=" << (*pos).first << "  value  " << (*pos).second << endl;
	//}
	//else
	//{
	//	cout << "No found" << endl;
	//}

	//int num = m1.count(2);						//统计 键值 为2的元素的个数
	//cout << num << endl;						//map 不允许插入 key。
	//											//multimap返回值可大于1。



	//map排序

	map<int, int, map_cmp>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 20));
	for (map<int, int, map_cmp>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "键值(key)  " << (*it).first << "  实值(value)  " << (*it).second << endl;
	}
}