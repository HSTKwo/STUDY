#pragma warning(disable:4996)
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void print(const deque<int>& deq)
{
	for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//int main()
//{
	//deque���캯��

	//deque<int>d1;					//Ĭ�Ϲ���
	//for (int i = 1; i <= 10; i++)
	//{
		//d1.push_back(i);
	//}
	//print(d1);

	//deque<int>d2(d1.begin(), d1.end());		//λ�ÿ���
	//print(d2);

	//deque<int>d3(10, 100);					//10��100
	//print(d3);

	//deque<int>d4(d3);						//��������
	//print(d4);




	//��ֵ����

	//d1 = d4;								//����=������
	//print(d1);

	//d1.assign(d2.begin(), d2.end());		//���俽��
	//print(d1);

	//d1.assign(10, 100);					//n��elem��
	//print(d1);



	//��С����

	//d1.resize(0);							//ɾ��Ԫ�ظ���  û�����������޴�
	//print(d1);

	//cout << d1.empty() << endl;				//�ж��Ƿ�Ϊ��

	//cout << d1.size() << endl;					//Ԫ�ظ���


	//d1.resize(10);
	//print(d1);

	//d1.resize(20, 1);						//Ĭ��ֵΪ1����
	//print(d1);




	//�����ɾ��

	//d1.clear();								//���

	//d1.push_front(10);						//ͷ��
	//d1.push_back(20);							//β��
	//print(d1);

	//d1.pop_front();							//ͷɾ
	//d1.pop_back();							//βɾ
	//print(d1);

	//d1.insert(d1.begin()+1, 15);				//posλ�ò�һ��elem
	//print(d1);

	//d1.insert(d1.begin() + 2, 2, 15);			//posλ�ò�n��elem
	//print(d1);

	//d1.insert(d1.begin()+1,d2.begin(),d2.end());	//��posλ���ϲ�������
	//print(d1);

	//d1.erase(d1.begin() + 1);					//ɾ��posλ���ϵ�Ԫ��
	//print(d1);

	//d1.erase(d1.begin() + 1, d1.end() - 1);	//ɾ�������ϵ�Ԫ��
	//print(d1);




	//deque���ݴ�ȡ
	
	//print(d1);
	//cout << d1.at(1) << endl;				  //idx��ʾ����
	//cout << d1[8] << endl;
	//cout << d1.front() << endl;			  //��һ��
	//cout << d1.back() << endl;			  //���һ��




	//deque����


	//d1.push_back(7);
	//d1.push_front(9);
	//d1.push_back(3);
	//print(d1);
	//sort(d1.begin(), d1.end());				//ͷ�ļ�algorithm��Ĭ�ϴ�С����
	//cout << "�����" << endl;
	//print(d1);


//}