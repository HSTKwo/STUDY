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
	//���� ��һ���� > ���ڵڶ�����
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
	//���캯��

	//list<int>l1;							//Ĭ�Ϲ���
	//l1.push_back(10);
	//l1.push_back(20);
	//l1.push_back(30);
	//l1.push_back(40);
	//l1.push_back(50);
	
	//list<int>l2(l1.begin(),l1.end());		//  [beg,end) ���俽��

	//list<int>l3(10,100);					//n��elem

	//list<int>l4(l3);						//��������
	
	//print(l1);
	//print(l2);
	//print(l3);
	//print(l4);



	//��ֵ�ͽ���

	//l2 = l3;								//���صȺŲ�����
	//l3.assign(l1.begin(), l1.end());		//[beg,end) ���俽��
	//l4.assign(10, 200);					//n��elem

	//print(l2);
	//print(l3);
	//print(l4);

	//l4.swap(l2);							//��������
	//print(l4);



	//��С����

	//cout << l1.empty() << endl;			//�ж������Ƿ�Ϊ��
	//cout << l1.size() << endl;			//����������С
	//l1.resize(10);						//����ָ��������С��Ĭ��ֵΪ0
	//print(l1);
	//l1.resize(0);						//���Ϊɾ��

	//l1.resize(10,10);					//����ָ��������С��Ĭ��ֵΪelem
	//print(l1);



	//�����ɾ��

	//l1.push_front(20);					//ͷ��
	//l1.push_back(60);						//β��
	//l1.pop_front();						//ͷɾ
	//l1.pop_back();						//βɾ
	//print(l1);

	//l1.insert(l1.begin(), 100);			//��������˫�����������������Ծ���ʣ���begin()�����Լ���
	//print(l1);							//��posλ�� ���� 1��elem

	//l1.insert(l1.begin(), 4,100);			//��posλ�� ���� n��elem
	//print(l1);

	//l1.insert(l1.begin(),l3.begin(), l3.end());			//��posλ�� ���� �����
	//print(l1);

	//l1.erase(l1.begin(), l1.end());				// ɾ�� ����ε�����
	//print(l1);

	//l1.erase(--l1.end());							// ɾ�� posλ���ϵ�����
	//print(l1);

	//l1.remove(100);								// �Ƴ� ����elem
	//print(l1);

	//l1.clear();									//���
	//print(l1);
	//cout << l1.size() << endl;



	//���ݴ�ȡ

	//��֧�� at �� [] ,��Ϊ�����ŵ����ݲ��������ģ���������˫�������
	//print(l1);
	//cout << l1.front() << endl;				//���ص�һ������
	//cout << l1.back() << endl;				//�������һ������



	//��ת������
	
	//l1.reverse();							//��ת����
	//print(l1);

	//l1.sort();							//����Ĭ�ϴ�С����  ���в�֧��������ʵĵ���������֧�ֱ�׼�㷨
	//print(l1);							//		�ڲ����Դ��㷨
	//l1.sort(lst_compare);				//�ṩ�������Ըı�����ʽ
	//print(l1);



	//������
	//Person�����������䣬���
	//����������������ͬ�� �������
	
	list<Person> a;

	//��������
	Person p1("a", 20, 186);
	Person p2("b", 20, 178);
	Person p3("c", 20, 176);
	Person p4("d", 45, 168);
	Person p5("e", 45, 192);
	Person p6("f", 30, 184);

	//��������
	a.push_back(p1);
	a.push_back(p2);
	a.push_back(p3);
	a.push_back(p4);
	a.push_back(p5);
	a.push_back(p6);
	for (list<Person>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << "����   " << (*it).m_name << "  ����   " << (*it).m_age << "  ���  " << (*it).m_high << endl;
	}

	//����
	cout << endl << "�����" << endl;
	a.sort(Per_cmp);
	for (list<Person>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << "����   " << (*it).m_name << "  ����   " << (*it).m_age << "  ���  " << (*it).m_high << endl;
	}

}