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
//	//����
//	queue<int>q1;
//	queue<int>q2(q1);
//
//	//��ֵ
//	q1 = q2;
//	
//	//���ݴ�ȡ
//	q1.push(10);
//	q1.push(20);
//	q1.push(30);
//	q1.push(40);
//	q1.pop();
//	cout << q1.front() << endl;
//	cout << q1.back() << endl;
//
//	//��С
//	q1.empty();
//	q1.size();
//
//	//��ϰ
//	queue<person>q;
//
//	person p1("��  ɮ", 20);
//	person p2("�����", 30);
//	person p3("��˽�", 40);
//	person p4("ɳ����", 50);
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	cout << "���д�С  " << q.size() << endl;
//
//	while (!q.empty())
//	{
//		cout << "����  " << q.front().m_name << "   ����    "<<q.front().m_age<<endl;
//		q.pop();
//	}
//
//	cout << "���д�С  " << q.size() << endl;
//
//}