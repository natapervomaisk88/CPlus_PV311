#include <iostream>
#include <ctime>
using namespace std;

int main()
{

	//����: �����
	/*
	����� ������ :
	1) ����� � ������������ (while)
	2) � ������������ (do while)
	3) ���� � ����������� (for)
	*/
	setlocale(LC_ALL, "");

	srand(time(0));
	int min = 1;
	int max = 5;
	cout << rand() % (max - min) + min;



	//const int N = 10;
	//
	//for (int i = N;i!=0;i--)
	//{
	//	cout << i << " ";
	//}
	//
	//auto w = 3.4+9;
	//w = 3.4;
	//cout << typeid(w).name();

	/*��������������� �����:*/
	/*
	�������������� ����� ��� ��������� ����������� 
	������ ���� ������ � �������.
	�������������� ������ �������� ������������ ����� � ���������
	�������������� ������: 
	����� - ����������� ������������� 
	������:
	cout << (int)3.4; -> 3
	cout << static_cast<int>3.4 -> 3

	������� �������������� ��������� ����������

	����������� �������������� - ��� �������������� 
	�� �������� ���� � ��������

	�������� - ��� �������������� �� �������� ���� � �������� 
	(�������� ������ ������)
	*/
	/*int a = 10;
	double b = 9.3;
	cout << int(a + b);
	cout << (int)b;
	cout << int(b);
	cout << static_cast<int>(b);*/



	/*short a=0, b=0;
	cout << typeid(true + true).name()<< endl;
	cout << typeid(a+b).name()<< endl;*/

	/*
	bool,char,short -> int
	long 
	long long
	float
	double
	*/ 
	//int a = 10.5;
	//int a2{ 10.5 }; //������������� �������������, ��������� �������� ��������������
	//float b = 9.4;
	//char c = 'A';
	//bool d = false;
	//long long e =4;
	//long g = 9;
	//short w = 3;
	//cout << typeid(c + c).name();
	//
	//cout << 'a' + 2 << endl;

	//cout << typeid(2l + 3.4).name() << endl;

	//cout << typeid(2ll + 3).name() << endl;

	//cout << typeid(2.0f + 3).name() << endl;

	//cout << typeid(.0f + 3).name() << endl;

	//long long test = 70000;
	//short test2 = test;
	//cout << endl << "Res: " << test2;
	//short t = 7;
	//cout << typeid(3l + 7.5f + true).name();

	//cout << typeid(7.8/5.6f).name();
	/*
	bool,char,short -> int
	long 
	long long
	float
	double
	*/

	return 0;
}