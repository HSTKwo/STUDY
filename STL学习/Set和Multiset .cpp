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
//		//����������
//		return p1.m_age < p2.m_age;
//	}
//};

//int main()
//{
	//����͸�ֵ

	//set<int>s1;			//Ĭ�Ϲ���
	//s1.insert(10);		//��������ֻ�� insert һ��
	//s1.insert(20);
	//s1.insert(30);		
	//s1.insert(50);		
	//s1.insert(40);
	//s1.insert(30);		//����������ظ���ֵ�����������������
	//print(s1);			//���Զ�����

	//set<int>s2(s1);		//��������
	//print(s2);

	//set<int>s3;			//���صȺŲ�����
	//s3 = s2;
	//print(s3);

	//set<int>s4;



	////��С�ͽ���

	//cout << s1.size() << endl;				//��������Ԫ�ظ���

	//cout << s1.empty() << endl;				//�ж������Ƿ�Ϊ��

	//s4.insert(1);								//������������������
	//s4.insert(5);
	//s4.insert(3);
	//s4.insert(2);
	//s4.insert(4);
	//print(s4);
	//s4.swap(s1);							
	//print(s4);



	////�����ɾ��

	//s1.clear();					//�������
	//print(s1);

	//s1.insert(60);				//����Ԫ��
	//s1.insert(10);				
	//s1.insert(40);				
	//s1.insert(50);				
	//s1.insert(30);				
	//s1.insert(20);				
	//print(s1);

	//s1.erase(s1.begin());		//ɾ��posλ�õ�Ԫ��
	//print(s1);

	//s1.erase(30);				//���ذ汾 ��ɾ��30���Ԫ��
	//print(s1);

	//s1.erase(s1.begin(), s1.end());			//ɾ�� [beg,pos)�����Ԫ��
	//print(s1);

	

	////���Һ�ͳ��

	//set<int>::iterator pos = s1.find(10);			//�ҵ��˷����� ������ ��û�ҵ�����set.end()

	//cout << s1.count(30) << endl;				//ͳ��Ԫ�صĸ���



	////set��multiset������

	////set ������ �ظ����� �����������ݣ���һ���ǵ��������ڶ���bool��Ҫ�õ�����

	//pair<set<int>::iterator, bool> ret = s1.insert(60);			//����
	//if (ret.second == 1)
	//{
	//	cout << "����ɹ�" << endl;
	//}
	//else
	//{
	//	cout << "����ʧ��" << endl;
	//}        
	//ret = s1.insert(60);				//�ڶ��β���
	//if (ret.second == 1)
	//{
	//	cout << "����ɹ�" << endl;
	//}
	//else
	//{
	//	cout << "����ʧ��" << endl;
	//}

	////multiset ���� �ظ�����

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



	////pair���鴴��

	////��һ��
	//pair<string, int> p1("Tom", 20);
	//cout << "����" << p1.first << "����" << p1.second << endl;

	////�ڶ���
	//pair<string, int>p2 = make_pair("Jerry", 21);
	//cout << "����" << p2.first << "����" << p2.second << endl;



	////set��������
	////���÷º��� �ı��������Ҫ�ڲ�����֮ǰ˵���������
	//
	////������������
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
	////�Զ�������

	//set<Person,comparePerson>s6;

	////��������
	//Person p1("����", 24);
	//Person p2("����", 23);
	//Person p3("�ŷ�", 26);
	//Person p4("����", 25);

	////��������
	//s6.insert(p1);
	//s6.insert(p2);
	//s6.insert(p3);
	//s6.insert(p4);

	//for (set<Person,comparePerson>::iterator it=s6.begin();it!=s6.end();it++)
	//{
	//	cout << "����   " << (*it).m_name << "   ����    " << (*it).m_age << endl;
	//}
//}