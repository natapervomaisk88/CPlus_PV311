#include <iostream>

using namespace std;

int main()
{
	//����: ���������� ��������� 
	//� ��������� ���������
	//> < >= <= != ==
	//and => && - ���������� �
	//or => || - ���������� ���
	//int x = 10, y = -7;
	//cout << (x >= 10 && !(y!= -7)); //true
	//�������� ! !(true) => false
	// !(false) => true

	/*bool f = 0;
	cout << f << endl;
	

	cout << (10.0f==10.0);*/
	
	//��������� (++)- ��� ������� ��������, ������� ����������� ��������
	//���������� �� 1 � �������������� �
	//int n = 10;
	//n++; // n=n+1, n+=1
	//cout << "n:" << n << endl;

	////��������� (--)- ��� ������� ��������, ������� ��������� ��������
	////���������� �� 1 � �������������� �
	//n--; //n=n-1, n-=1
	//cout << "n:" << n << endl;
	////�������� � ��������� ������ ����������� x++, x--
	////� ���������� ++x, --x

	//int n = 10;
	//int result = 10*++n ; //10*11=110
	//cout << result << endl; 
	//cout << n;

	/*int age;
	cout << "Enter your age: ";
	cin >> age;
	if (age < 18)
	{
		cout << "Children";
	}	
	else if(age>=18)
	{
		cout << "No children";
	}
	*/

	//switch
	setlocale(LC_ALL, "");
	/*int day;
	cin >> day;
	switch (day) {
	case 1:
		cout << "�����������";
		break;
	case 2:
		cout << "�������";
		break;
	case 3:
		cout << "�����";
		break;
	case 4:
		cout << "�������";
		break;
	case 5:
		cout << "�������";
		break;
	case 6:
		cout << "�������";
		
	case 7:
		cout << "�����������";
		break;
	default:
		cout << "������, ��� ������ ��� ������";
	}*/

	//��������� ��������
	//int x = 0;
	//char answer = (x==0)?'0':(x<0)?'-':'+';

	//cout << answer;

	/*double x = 8;
	if (x % 2 == 0)
	{
		cout << "Even";
	}
	else
	{
		cout << "Odd";
	}*/
	
	/*const int COUNT_MARK = 5;
	int mark;
	int sum = 0;
	for (int i = 0; i < COUNT_MARK; i++)
	{
		cout << "Input mark [" << i + 1 << "]:";
		cin >> mark;
		sum += mark;
	}

	float avg = (float)sum / COUNT_MARK;*/
	

	/*int n1, n2;
	char my_operator;
	cout << "������� ������ (4+5):";
	cin >> n1 >> my_operator >> n2;
	int result=0;
	switch (my_operator) {
	case '+':
		result = n1 + n2;
		break;
	}
	cout << "���������: " << result;*/

	double g1, g2, g3, g4, g5;
	cout << "Enter grade 1: " << endl;
	cin >> g1;
	cout << "Enter grade 2: " << endl;
	cin >> g2;
	cout << "Enter grade 3: " << endl;
	cin >> g3;
	cout << "Enter grade 4: " << endl;
	cin >> g4;
	cout << "Enter grade 5: " << endl;
	cin >> g5;

	double grade_average = ((g1 + g2 + g3 + g4 + g5) / 5);

	(grade_average >= 4) ? (cout<<"������� ������") : (cout<<"������ ������");


	

	return 0;
}