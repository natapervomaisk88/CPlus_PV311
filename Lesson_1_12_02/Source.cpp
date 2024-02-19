#include <iostream> //подключение библиотеки ввода(Input) вывода (Output)
#include <Windows.h>
using namespace std; //использовать пространство имён std - standart

int main()
{
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	setlocale(LC_ALL, "");

	//Типы данных
	/*
	Целочисленные:
	- short (2 байта) 

	- int (не меньше short не больше long, или 2 байта или 4 байта
	в зависимости от архитектуры процессора или от длинны машинного слова
	)
	Машинное слово - это характеристика, которая показывает сколько информации
	может обработать процессор за один такт

	- long 4 байта
	- long long 8 байт

	Символьный char (1 байт)
	char symbol = 'A';

	Числа с плавающей точкой (вещественные)
	float - 4 байта
	float price = 9.4f;
	
	double - 8 байт
	double price = 9.4;

	void - пусто (используется при возврате из функции пустых значений)

	bool 1 байт (true(1) / false(0))

	enum color {RED, YELLOW=4, BLUE}; - перечисление целочисленных констант
	по умолчанию начинается с нуля

	*/

	

	float r1, r2, r3;

	float r0;

	cout << "Введите сопротивление 1го элемента" << endl;

	cin >> r1;

	cout << "Введите сопротивление 2го элемента" << endl;

	cin >> r2;

	cout << "Введите сопротивление 3го элемента" << endl;

	cin >> r3;

	r0 = 1/((1 / r1) + (1 / r2) + (1 / r3));

	cout << "Общее сопротивление" << r0 << endl;

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


	









// Однострочный комментарий

/*Многострочный комментарий
Ctrl+K Ctrl+C  
Раскомментировать
CTRL+K CTRL+U*/

/*
* 197x год Денис Ритчи (Bell Labs) разработал язык С
C++ 
Bell Labs, Бьёрн Страуструп
Сначала С++ назывался С с классами (1983 года)
C++ регистрозависимый
С++ язык со строгой типизацией
*/

