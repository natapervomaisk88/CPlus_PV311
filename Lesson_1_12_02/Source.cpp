#include <iostream> //����������� ���������� �����(Input) ������ (Output)
#include <Windows.h>
using namespace std; //������������ ������������ ��� std - standart

int main()
{
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	setlocale(LC_ALL, "");

	//���� ������
	/*
	�������������:
	- short (2 �����) 

	- int (�� ������ short �� ������ long, ��� 2 ����� ��� 4 �����
	� ����������� �� ����������� ���������� ��� �� ������ ��������� �����
	)
	�������� ����� - ��� ��������������, ������� ���������� ������� ����������
	����� ���������� ��������� �� ���� ����

	- long 4 �����
	- long long 8 ����

	���������� char (1 ����)
	char symbol = 'A';

	����� � ��������� ������ (������������)
	float - 4 �����
	float price = 9.4f;
	
	double - 8 ����
	double price = 9.4;

	void - ����� (������������ ��� �������� �� ������� ������ ��������)

	bool 1 ���� (true(1) / false(0))

	enum color {RED, YELLOW=4, BLUE}; - ������������ ������������� ��������
	�� ��������� ���������� � ����

	*/

	

	float r1, r2, r3;

	float r0;

	cout << "������� ������������� 1�� ��������" << endl;

	cin >> r1;

	cout << "������� ������������� 2�� ��������" << endl;

	cin >> r2;

	cout << "������� ������������� 3�� ��������" << endl;

	cin >> r3;

	r0 = 1/((1 / r1) + (1 / r2) + (1 / r3));

	cout << "����� �������������" << r0 << endl;

	return 0;


	const int WIDTH = 200;

	int const HEIGHT = 300;

	enum students {VASYA=10, PETYA=11, OLEG};
	cout << OLEG << endl;

	long price;
	price = 19;



	cout << typeid(price).name() << endl;
	long long price2 = 19;
	cout << typeid(price2).name();
	char s = 'A';

	unsigned short age = 65536;
	cout << sizeof(age) << endl;
	
	cout << "Hello World!";
	cout << '\n';

	cout << "Hello World!\n";

	cout << "Hello World!" << "\n";

	cout << "Hello World!" << endl;

	system("pause");
	return 0;
}


	









// ������������ �����������

/*������������� �����������
Ctrl+K Ctrl+C  
�����������������
CTRL+K CTRL+U*/

/*
* 197x ��� ����� ����� (Bell Labs) ���������� ���� �
C++ 
Bell Labs, ����� ����������
������� �++ ��������� � � �������� (1983 ����)
C++ �����������������
�++ ���� �� ������� ����������
*/

