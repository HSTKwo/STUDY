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

	//����

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




	//��ֵ

	//v1 = v4;												//��װ��=������

	//v2.assign(v1.begin(), v1.end());

	//v3.assign(10, 100);




	//�����ʹ�С

	//cout <<"v1�Ƿ�Ϊ��"<< v1.empty() << endl;				//�� ����1������ ����0

	//cout <<"v1������"<<v1.capacity() << endl;				//�����ڴ��С���������ڵ���Ԫ�ظ�������࿪���ڴ档

	//cout <<"v1��Ԫ�ظ���"<<v1.size() << endl;				//

	//v1.resize(15);										//resize��СΪ15��������������15����Ĭ��ֵΪ0����������ӵ�5��

	//v1.resize(15,10);										//Ĭ��ֵΪ10��

	//v1.resize(0);

	//cout << v1.empty() << endl;




	//vector�����ɾ��

	//v1.clear();

	//v1.push_back(10);
	//v1.push_back(20);
	//v1.push_back(30);
	//v1.push_back(40);
	//v1.push_back(50);

	//v1.pop_back();

	//v1.insert(v1.begin(), 0);								//���벻���滻

	//v1.insert(v1.begin(),2, 0);							//����2��0

	//v1.erase(v1.begin() + 1);							

	//v1.erase(v1.begin(), v1.end() - 1);					





	//vector���ݴ�ȡ

	//cout << v1.at(5) << endl;

	//cout << v1[5] << endl;

	//cout << v1.front() << endl;

	//cout << v1.back() << endl;





	//vector��������						

	//print(v1);
	//print(v4);
	//v1.swap(v4);
	//print(v1);
	//print(v4);
																//����swap���������ڴ�
	//cout << "v1������       " << v1.capacity() << endl;
	//cout << "v1��Ԫ�ظ���   " << v1.size() << endl << endl;
	//v1.resize(5);
	//cout << "v1������       " << v1.capacity() << endl;
	//cout << "v1��Ԫ�ظ���   " << v1.size() << endl << endl;
	//vector<int>(v1).swap(v1);									//�����ڴ�
	//cout << "v1������       " << v1.capacity() << endl;
	//cout << "v1��Ԫ�ظ���   " << v1.size() << endl << endl;




	//vectorԤ���ռ�

	//int count = 0;		//ͳ�ƿ��ٵĴ���
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
	//cout << "���ٵĴ���    " << count << endl;


	//vector<int>v1;
	//v1.reserve(100000);
	//int count = 0;		//ͳ�ƿ��ٵĴ���
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
	//cout << "���ٵĴ���    " << count << endl;
