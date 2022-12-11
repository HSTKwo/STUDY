#pragma warning(disable:4996)
#include<iostream>
#include<map>
using namespace std;

void print(map<int, int>& mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "��ֵ(key)  " << (*it).first << "  ʵֵ(value)  " << (*it).second << endl;
	}
	cout << endl;
}

class map_cmp
{
public:
	bool  operator()(int v1, int v2)const
	{
		//����keyֵ����
		return v1 > v2;
	}
};

int main()
{
	//���캯��

	map<int,int>m1;						//Ĭ�Ϲ���
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	m1.insert(pair<int, int>(5, 50));
	//print(m1);
	
	map<int, int>m2(m1);				//��������
	//print(m2);

	map<int, int>m3;					//���صȺŲ�������ֵ
	m3 = m2;
	//print(m3);

	map<int, int>m4;



	////��С�ͽ���

	//cout << m1.empty() << endl;			//�ж������Ƿ�Ϊ��

	//cout << m1.size() << endl;			//��������Ԫ�ظ���

	//print(m1);							//����������
	//m4.insert(pair<int, int>(1, 60));
	//m4.insert(pair<int, int>(2, 70));
	//m4.insert(pair<int, int>(3, 80));
	//m4.insert(pair<int, int>(4, 90));
	//m4.insert(pair<int, int>(5, 100));
	//m1.swap(m4);
	//print(m1);
	//print(m4);



	////�����ɾ��

	//m1.clear();									//���
	//print(m1);
	//
	//m4.insert(pair<int, int>(1, 60));			//����,������
	//m4.insert(make_pair(2 ,70));
	//m4.insert(map<int,int>::value_type(3, 80));
	//m4[4] = 90;									//�����飬����key����value��
	//cout << m4[3] << endl;						//һ��������
	//cout << m4[5] << endl;						//��Ϊ����˻���ʵֵĬ��Ϊ0
	//print(m4);

	//m4.erase(--m4.end());						//ɾ��posλ���ϵ�����
	//print(m4);

	//m4.erase(2);								//���أ���keyֵΪ2��ɾ��
	//print(m4);

	//m4.erase(m4.begin(), m4.end());				//ɾ������ [beg,end) �����Ԫ��
	//print(m4);



	////���Һ�ͳ��

	//map<int, int>::iterator pos = m1.find(2);	//���� ��ֵ(key) Ϊ2��Ԫ��,���� ������ 
	//if (pos != m1.end())
	//{
	//	cout << "�ҵ�Ԫ��  key=" << (*pos).first << "  value  " << (*pos).second << endl;
	//}
	//else
	//{
	//	cout << "No found" << endl;
	//}

	//int num = m1.count(2);						//ͳ�� ��ֵ Ϊ2��Ԫ�صĸ���
	//cout << num << endl;						//map ��������� key��
	//											//multimap����ֵ�ɴ���1��



	//map����

	map<int, int, map_cmp>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 20));
	for (map<int, int, map_cmp>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "��ֵ(key)  " << (*it).first << "  ʵֵ(value)  " << (*it).second << endl;
	}
}