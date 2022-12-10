#pragma warning(disable:4996)
#include<iostream>
#include<list>
#include<string>
using namespace std;

void print(const list<int>& lst)
{
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool lst_compare(int v1, int v2)
{
	//降序 第一个数 > 大于第二个数
	return v1 > v2;	
}

class Person
{
public:
	Person(string name,int age,int high)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_high = high;
	}

	string m_name;
	int m_age;
	int m_high;
};

bool Per_cmp(Person& p1, Person& p2)
{
	if (p1.m_age == p2.m_age)
		return p1.m_high < p2.m_high;
	else
		return p1.m_age < p2.m_age;	
}

int main()
{
	//构造函数

	//list<int>l1;							//默认构造
	//l1.push_back(10);
	//l1.push_back(20);
	//l1.push_back(30);
	//l1.push_back(40);
	//l1.push_back(50);
	
	//list<int>l2(l1.begin(),l1.end());		//  [beg,end) 区间拷贝

	//list<int>l3(10,100);					//n个elem

	//list<int>l4(l3);						//拷贝构造
	
	//print(l1);
	//print(l2);
	//print(l3);
	//print(l4);



	//赋值和交换

	//l2 = l3;								//重载等号操作符
	//l3.assign(l1.begin(), l1.end());		//[beg,end) 区间拷贝
	//l4.assign(10, 200);					//n个elem

	//print(l2);
	//print(l3);
	//print(l4);

	//l4.swap(l2);							//交换容器
	//print(l4);



	//大小操作

	//cout << l1.empty() << endl;			//判断容器是否为空
	//cout << l1.size() << endl;			//返回容器大小
	//l1.resize(10);						//重新指定容器大小，默认值为0
	//print(l1);
	//l1.resize(0);						//变短为删除

	//l1.resize(10,10);					//重新指定容器大小，默认值为elem
	//print(l1);



	//插入和删除

	//l1.push_front(20);					//头插
	//l1.push_back(60);						//尾插
	//l1.pop_front();						//头删
	//l1.pop_back();						//尾删
	//print(l1);

	//l1.insert(l1.begin(), 100);			//迭代器是双向迭代器，不可以跳跃访问，故begin()不可以加数
	//print(l1);							//在pos位置 插入 1个elem

	//l1.insert(l1.begin(), 4,100);			//在pos位置 插入 n个elem
	//print(l1);

	//l1.insert(l1.begin(),l3.begin(), l3.end());			//在pos位置 插入 区间段
	//print(l1);

	//l1.erase(l1.begin(), l1.end());				// 删除 区间段的数据
	//print(l1);

	//l1.erase(--l1.end());							// 删除 pos位置上的数据
	//print(l1);

	//l1.remove(100);								// 移除 数据elem
	//print(l1);

	//l1.clear();									//清空
	//print(l1);
	//cout << l1.size() << endl;



	//数据存取

	//不支持 at 和 [] ,因为链表存放的数据不是连续的，迭代器是双向迭代器
	//print(l1);
	//cout << l1.front() << endl;				//返回第一个数据
	//cout << l1.back() << endl;				//返回最后一个数据



	//反转和排序
	
	//l1.reverse();							//反转容器
	//print(l1);

	//l1.sort();							//排序（默认从小到大）  所有不支持随机访问的迭代器，不支持标准算法
	//print(l1);							//		内部会自带算法
	//l1.sort(lst_compare);				//提供函数可以改变排序方式
	//print(l1);



	//排序案例
	//Person有姓名，年龄，身高
	//按年龄升序，年龄相同按 身高升序
	
	list<Person> a;

	//创建对象
	Person p1("a", 20, 186);
	Person p2("b", 20, 178);
	Person p3("c", 20, 176);
	Person p4("d", 45, 168);
	Person p5("e", 45, 192);
	Person p6("f", 30, 184);

	//放入容器
	a.push_back(p1);
	a.push_back(p2);
	a.push_back(p3);
	a.push_back(p4);
	a.push_back(p5);
	a.push_back(p6);
	for (list<Person>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << "姓名   " << (*it).m_name << "  年龄   " << (*it).m_age << "  身高  " << (*it).m_high << endl;
	}

	//排序
	cout << endl << "排序后" << endl;
	a.sort(Per_cmp);
	for (list<Person>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << "姓名   " << (*it).m_name << "  年龄   " << (*it).m_age << "  身高  " << (*it).m_high << endl;
	}

}