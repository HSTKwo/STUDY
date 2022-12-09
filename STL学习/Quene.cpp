//#pragma warning(disable:4996)
//
//#include<iostream>
//#include<queue>
//#include<string>
//using namespace std;
//
//class person 
//{
//public:
//	person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//
//int main()
//{
//	//构造
//	queue<int>q1;
//	queue<int>q2(q1);
//
//	//赋值
//	q1 = q2;
//	
//	//数据存取
//	q1.push(10);
//	q1.push(20);
//	q1.push(30);
//	q1.push(40);
//	q1.pop();
//	cout << q1.front() << endl;
//	cout << q1.back() << endl;
//
//	//大小
//	q1.empty();
//	q1.size();
//
//	//练习
//	queue<person>q;
//
//	person p1("唐  僧", 20);
//	person p2("孙悟空", 30);
//	person p3("猪八戒", 40);
//	person p4("沙和尚", 50);
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	cout << "队列大小  " << q.size() << endl;
//
//	while (!q.empty())
//	{
//		cout << "人物  " << q.front().m_name << "   年龄    "<<q.front().m_age<<endl;
//		q.pop();
//	}
//
//	cout << "队列大小  " << q.size() << endl;
//
//}