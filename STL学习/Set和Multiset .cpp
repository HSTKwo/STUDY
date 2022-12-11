#pragma warning(disable:4996)
#include<iostream>
#include<set>
using namespace std;

//void print(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//class set_cmp
//{
//public:
//	bool operator()(int v1,int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//class comparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person& p2)const
//	{
//		//按年龄升序
//		return p1.m_age < p2.m_age;
//	}
//};

//int main()
//{
	//构造和赋值

	//set<int>s1;			//默认构造
	//s1.insert(10);		//插入数据只有 insert 一种
	//s1.insert(20);
	//s1.insert(30);		
	//s1.insert(50);		
	//s1.insert(40);
	//s1.insert(30);		//不允许插入重复的值，不报错，但不会插入
	//print(s1);			//会自动排序，

	//set<int>s2(s1);		//拷贝构造
	//print(s2);

	//set<int>s3;			//重载等号操作符
	//s3 = s2;
	//print(s3);

	//set<int>s4;



	////大小和交换

	//cout << s1.size() << endl;				//返回容器元素个数

	//cout << s1.empty() << endl;				//判断容器是否为空

	//s4.insert(1);								//交换两个容器的数据
	//s4.insert(5);
	//s4.insert(3);
	//s4.insert(2);
	//s4.insert(4);
	//print(s4);
	//s4.swap(s1);							
	//print(s4);



	////插入和删除

	//s1.clear();					//清空容器
	//print(s1);

	//s1.insert(60);				//插入元素
	//s1.insert(10);				
	//s1.insert(40);				
	//s1.insert(50);				
	//s1.insert(30);				
	//s1.insert(20);				
	//print(s1);

	//s1.erase(s1.begin());		//删除pos位置的元素
	//print(s1);

	//s1.erase(30);				//重载版本 ，删除30这个元素
	//print(s1);

	//s1.erase(s1.begin(), s1.end());			//删除 [beg,pos)区间的元素
	//print(s1);

	

	////查找和统计

	//set<int>::iterator pos = s1.find(10);			//找到了返回了 迭代器 ，没找到返回set.end()

	//cout << s1.count(30) << endl;				//统计元素的个数



	////set与multiset的区别

	////set 不允许 重复插入 返回两个数据，第一个是迭代器，第二个bool，要用到队组

	//pair<set<int>::iterator, bool> ret = s1.insert(60);			//队组
	//if (ret.second == 1)
	//{
	//	cout << "插入成功" << endl;
	//}
	//else
	//{
	//	cout << "插入失败" << endl;
	//}        
	//ret = s1.insert(60);				//第二次插入
	//if (ret.second == 1)
	//{
	//	cout << "插入成功" << endl;
	//}
	//else
	//{
	//	cout << "插入失败" << endl;
	//}

	////multiset 允许 重复插入

	//multiset<int>ms;
	//ms.insert(10);
	//ms.insert(50);
	//ms.insert(40);
	//ms.insert(30);
	//ms.insert(40);
	//ms.insert(20);
	//for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;



	////pair对组创建

	////第一种
	//pair<string, int> p1("Tom", 20);
	//cout << "姓名" << p1.first << "年龄" << p1.second << endl;

	////第二种
	//pair<string, int>p2 = make_pair("Jerry", 21);
	//cout << "姓名" << p2.first << "年龄" << p2.second << endl;



	////set容器排序
	////利用仿函数 改变排序规则，要在插数据之前说明排序规则
	//
	////内置数据类型
	//set<int, set_cmp>s5;
	//s5.insert(10);
	//s5.insert(40);
	//s5.insert(30);
	//s5.insert(50);
	//s5.insert(20);
	//for (set<int, set_cmp>::iterator it = s5.begin(); it != s5.end(); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;
	//
	////自定义类型

	//set<Person,comparePerson>s6;

	////创建对象
	//Person p1("刘备", 24);
	//Person p2("关羽", 23);
	//Person p3("张飞", 26);
	//Person p4("赵云", 25);

	////放入数据
	//s6.insert(p1);
	//s6.insert(p2);
	//s6.insert(p3);
	//s6.insert(p4);

	//for (set<Person,comparePerson>::iterator it=s6.begin();it!=s6.end();it++)
	//{
	//	cout << "姓名   " << (*it).m_name << "   年龄    " << (*it).m_age << endl;
	//}
//}